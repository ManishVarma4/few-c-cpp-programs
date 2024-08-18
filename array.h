#include <stdio.h>
#include <stdlib.h>

struct Array {
    int *a;
    int max;
    int size;
};
//0)creating
struct Array* create(int size){
    struct Array* A1 = (struct Array*)malloc(sizeof(struct Array));
    A1->a=(int *)malloc(size*sizeof(int));
    A1->max = size;
    A1->size = 0;
    return A1;
}
//1)traversing
void traverse(struct Array *Arr) {
    for (int i = 0; i < Arr->size; i++) {
        printf("%d ", Arr->a[i]);
    }
    printf("\n");
}
//2)inserting
void insert(struct Array *Arr, int elem, int i) {
    Arr->size++;
    if (i >= Arr->size || Arr->size > Arr->max) {
        printf("OUT of Bound\n");
    } else {
        Arr->a[i] = elem;
    }
}
//3)deleting
void del(struct Array *Arr, int i) {
    if (i < 0 || i >= Arr->size) {
        printf("Out of bound\n");
    } else {
        for (int j = i; j < Arr->size - 1; j++) {
            Arr->a[j] = Arr->a[j + 1];
        }
        Arr->size=Arr->size-1;
    }
}
//4)sorting
void sort(struct Array *Arr){
     for (int i = 0; i < Arr->size; i++) {
        for (int j = 0; j < Arr->size-1; j++) {
            if (Arr->a[j] > Arr->a[j + 1]) {
                int temp=Arr->a[j];
                Arr->a[j]=Arr->a[j + 1];
                Arr->a[j + 1]=temp;
            }
        }
    }
}
//5)searching
int search(struct Array *Arr,int elem){
    for(int i=0;i<Arr->size;i++){
        if(Arr->a[i]==elem) return i;
    }
    return -1;
}
//6)modify
int modify(struct Array *Arr,int elem,int i){
    if (i<0 || i >= Arr->size) {
        printf("Out of bound\n");
        return 0;
    }
    else{
        Arr->a[i]=elem;
        return 1;
    }
   
}
int option(){
    int choice;
    printf("--------------------------\n");
    printf("key 1: Insert Elements\n");
    printf("key 2: Traverse Elements\n");
    printf("key 3: Delete Element by Index\n");
    printf("key 4: Sort the Array\n");
    printf("key 5: Search Element \n");
    printf("key 6: Modify Element at an Index\n");
    printf("key 0: Exit\n");
    printf("--------------------------\n");
    scanf("%d",&choice);
    return choice;
}