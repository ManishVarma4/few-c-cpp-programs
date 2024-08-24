#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* create() {
    int n,data;
    printf("Enter the number of Nodes: \n");
    scanf("%d",&n);
    struct Node* first;
    first=NULL;
    for(int i=0; i<n; i++) {
        printf("Enter Data:");
        scanf("%d",&data);
        struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data=data;
        temp->next=NULL;
        struct Node* ptr;
        if(first == NULL) {
            first = temp;
        }
        else {
            ptr = first;
            while(ptr->next!=NULL) {
                ptr=ptr->next;
            }
            ptr->next=temp;
        }
    }
    return first;
}

void display(struct Node* first) {
    struct Node* ptr;
    ptr=first;
    while(ptr!=NULL) {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}
struct Node* insert_first(struct Node* first) {
    int data;
    printf("Enter Data to insert at the beginning:");
    scanf("%d",&data);
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data= data;
    temp->next= first;
    return temp;
}
void insert_last(struct Node* first) {
    int data;
    printf("Enter Data to insert at the end:");
    scanf("%d",&data);
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    struct Node* ptr;
    ptr=first;
    while(ptr->next!=NULL) {
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->data= data;
    temp->next= NULL;
}
void insert_at_index(struct Node* first) {
    int data,pos;
    printf("Enter the position to insert the data:");
    scanf("%d",&pos);
    if(pos<2) {
        printf("INVALID POSITION\n");
        return;
    }
    printf("Enter Data:");
    scanf("%d",&data);
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    struct Node* ptr;
    ptr=first;
    int i=2;
    while(ptr->next!=NULL && i!=pos) {
        ptr=ptr->next;
        i++;
    }
    if(ptr==NULL) printf("ERROR\n");
    else {
        temp->next= ptr->next;
        ptr->next=temp;
    }
}
struct Node* delete_first(struct Node* first) {
    printf("Data Deleted : %d\n",first->data);
    struct Node* ptr=first;
    first=first->next;
    free(ptr);
    return first;
}
void delete_last(struct Node* first) {
    struct Node* ptr;
    struct Node* prev;
    ptr=first;
    while(ptr->next!=NULL) {
        prev=ptr;
        ptr=ptr->next;
    }
    printf("Data Deleted : %d\n",ptr->data);
    prev->next=NULL;
    free(ptr);
}
void delete_at_index(struct Node* first) {
    int pos;
    printf("Enter the position to delete the data:");
    scanf("%d",&pos);
    if(pos<2) {
        printf("INVALID POSITION\n");
        return;
    }
    struct Node *ptr;
    ptr=first;
    int i=2;
    while(ptr->next!=NULL && i!=pos) {
        ptr=ptr->next;
        i++;
    }
    struct Node *ptr1;
    ptr1=ptr->next;
    printf("Data Deleted : %d\n",ptr1->data);
    ptr->next=ptr->next->next;
    free(ptr1);
}
int search(struct Node* first,int data){
    struct Node *ptr;
    ptr=first;
    int pos=1;
    while(ptr!=NULL) {
        if(ptr->data==data) return pos;
        pos++;
        ptr=ptr->next;
    }
    if(ptr==NULL){
        printf("Element not found!!\n");
        return -1;
    }
    return pos;
}
void update(struct Node* first){
    int pos,data,i=2;
    printf("Enter the position to update the data:");
    scanf("%d",&pos);
    printf("Enter data:");
    scanf("%d",&data);
    if(pos==1){
         first->data= data;
    }
    else{
        struct Node *ptr;
        ptr=first;
        while(ptr!=NULL && i!=pos) {
            ptr=ptr->next;
            i++;
        }
        ptr->next->data=data;
    }
}
int option(){
    int choice;
    printf("--------------------------\n");
    printf("key 1: Create a linked list\n");
    printf("key 2: Insert at first\n");
    printf("key 3: Insert at last\n");
    printf("key 4: Insert in between\n");
    printf("key 5: Display\n");
    printf("key 6: Delete at first\n");
    printf("key 7: Delete at last\n");
    printf("key 8: Delete in between\n");
    printf("key 9: Update list\n");
    printf("key 10: Search the list\n");
    printf("key 0: Exit\n");
    printf("--------------------------\n");
    scanf("%d",&choice);
    return choice;
}
int main() {
    int choice;
    while(1){
        choice=option();  
        switch (choice) {
                case 0:
                    printf("Thank you for using the linked list!!\n");
                    return 0;
                case 1:
                   struct Node* first = create();
                    break;
                case 2:
                    first = insert_first(first);
                    break;
                case 3:
                   insert_last(first);
                    break;
                case 4:
                    insert_at_index(first);
                    break;
                case 5:
                   display(first);
                    break;
                case 6:
                     first= delete_first(first);
                    break;
                case 7:
                     delete_last(first);
                    break;
                case 8:
                     delete_at_index(first);
                    break;
                case 9:
                     update(first);
                    break;
                case 10:
                    int data;
                    printf("Entere data to be searched:");
                    scanf("%d",&data);
                    printf("The data is at: %d position\n",search(first,data));
                    break;
                default:
                    printf("Error (Invalid Selection)\n");
                    break;
            }
    }
}