#include<stdio.h>
void main(){
    int a[]={34,56,27,1,35,67,89,45,78,34};
    for(int i=0;i<9;i++){
        int min=i;
        for(int j=i+1;j<10;j++){
            if(a[j]<a[min]) min=j;
        }
        if(min!=i){
            int temp= a[i];
            a[i]= a[min];
            a[min]= temp;
        }
    }
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
}