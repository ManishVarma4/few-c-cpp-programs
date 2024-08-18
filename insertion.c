#include<stdio.h>
void main(){
    int a[]={34,56,27,1,35,67,89,45,78,34};
    for(int i=1;i<10;i++){
        int temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;    
    }
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
}