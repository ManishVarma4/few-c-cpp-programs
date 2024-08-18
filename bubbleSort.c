#include<stdio.h>
void main(){
    int a[]={34,56,27,1,35,67,89,45,78,34};
    for(int i=0;i<9;i++){
        for(int j=0;j<9-i;j++){
            if(a[j]>a[j+1]){
               int temp= a[j+1];
               a[j+1]=a[j];
               a[j]=temp;
            }
        }
    }
    for(int i=0;i<10;i++){
        printf("%d\n",a[i]);
    }
}