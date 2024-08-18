#include <stdio.h>
#include <stdlib.h>
struct Queue{
    int *a;
    int size;
};
//creating
struct Queue* create(){
    struct Queue* A1 = (struct Queue*)malloc(sizeof(struct Queue));
    A1->a=(int *)malloc(5*sizeof(int));
    A1->size = 0;
    return A1;
}
int in(struct Queue* q,int amount){
    if(q->size==5){
        
        return 0;
    }
    else{
        q->a[q->size++]=amount;
        return q->size;       
    }
}
int checkout(struct Queue* q){
    if(q->size==0){
        printf("No more customers in the queue\n");
        return -1;
    }
    else{
        int cus=q->a[0];
        for(int i=1;i<q->size;i++){
            q->a[i-1]=q->a[i];
        }
        q->size--;
        return cus;
    }
}
void show(struct Queue* q){
    if(q->size==0){
        printf("No customers in the queue\n");
        return;
    }
    else{
        for(int i=0;i<q->size;i++){
            printf("%d ",q->a[i]);
        }
        printf("\n");
    }
}
int option(){
    int choice;
    printf("--------------------------\n");
    printf("key 1: New Customer\n");
    printf("key 2: Checkout customer type -A\n");
    printf("key 3: Checkout customer type -B\n");
    printf("key 4: Checkout customer type -C\n");
    printf("key 5: Show Queue type -A\n");
    printf("key 6: Show Queue type -B\n");
    printf("key 7: Show Queue type -C\n");
    printf("key 0: Exit\n");
    printf("--------------------------\n");
    scanf("%d",&choice);
    return choice;
}

int main(){
    struct Queue* A = create();
    struct Queue* B = create();
    struct Queue* C = create();
    int choice,elem,amount;
    while(1){
        choice=option();  
        switch (choice) {
                case 0:
                    printf("Thank you for using the Queue!!\n");
                    return 0;
                case 1:
                    printf("Enter the total amount: ");
                    scanf("%d",&amount);
                    printf("Enter Customer Type (1,2,3): ");
                    scanf("%d", &elem);
                    if(elem==1){
                        if(in(A,amount)==-1){
                            if(in(C,amount)==-1){
                                printf("Queue is full, please wait!\n");
                            }
                        }
                    }
                    else if(elem==2){
                        if(in(B,amount)==-1){
                            if(in(C,amount)==-1){
                                printf("Queue is full, please wait!\n");
                            }
                        }
                    }
                    else if(elem==3){
                        if(in(C,amount)==-1){
                                printf("Queue is full, please wait!\n");
                        }
                    } 
                    else printf("INVALID CUSTOMER TYPE!!!");
                    break;
                case 2:
                    printf("Total amount debited (cash): Rs. %d \n",checkout(A));
                    break;
                case 3:
                    printf("Total amount debited (card): Rs. %d \n",checkout(B));
                    break;
                case 4:
                    printf("Total amount debited (cash/card): Rs. %d \n",checkout(C));
                    break;
                case 5:
                    show(A);
                    break;
                case 6:
                    show(B);
                    break;
                case 7:
                    show(C);
                    break;
                default:
                    printf("Error (Invalid Selection)\n");
                    break;
            }
    }
    return 0;
}

