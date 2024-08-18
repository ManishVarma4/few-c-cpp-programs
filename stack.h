#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct Stack {
char *a;
int size;
int top;

};
//0)creating
struct Stack* create(int size){
struct Stack* A1 = (struct Stack*)malloc(sizeof(struct Stack));
A1->a=(char *)malloc(size*sizeof(char));
A1->size = size;
A1->top = -1;
return A1;
}
void push(struct Stack *A, char i){
    if(A->top >= A->size - 1){
        printf("The Stack is full!!!\n");
        return;
    }
    else{
        A->top +=1;
        A->a[A->top]= i;
    }
}
char pop(struct Stack *A){
    if(A->top==-1){
        printf("Stack is Empty\n");
        return 'Z';
    }
    else{
        return A->a[A->top--];
    }
}
void copy_rev(struct Stack *A,struct Stack *B){
    struct Stack* temp = create(3*A->size);
    while(A->top >-1){
         char temp1=pop(A);
         push(temp,temp1);
         push(B,temp1);
    }
    while(temp->top >-1){
         push(A,pop(temp));
    }
    free(temp->a);
    free(temp);
}
void display(struct Stack *A){
    struct Stack* temp = create(3*A->size);
    copy_rev(A,temp);
    while(temp->top >-1){
        printf("%c ",pop(temp));
    }
    printf("\n");
    free(temp->a);
    free(temp);
}
void checkPalindrome(struct Stack *A){
    struct Stack* B = create(3*A->size);
    copy_rev(A,B);
   
    while(A->top >-1){
         char temp1=pop(A);
         char temp2= pop(B);
         if(temp1 != temp2){
             printf("The provided String is not a palindrome!!");
             return;
         }
    }
    printf("The provided String is a palindrome!!");

}
