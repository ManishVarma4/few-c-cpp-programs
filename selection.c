#include<stdio.h>
void sort(int *a[],int size){
   if(size==0) return;
   else{
    int min= 0;
    for(int i=1;i<size;i++){
        if(a[min]>a[i]) min=i;
    }
    if(min!=0){
            int temp= a[0];
            a[0]= a[min];
            a[min]= temp;
    }
    sort(a+1,--size);

   } 
}
void main(){
    int a[]={1,2,4,3,34,56,27,1,35,67,89,45,78,34};
    // for(int i=0;i<9;i++){
    //     int min=i;
    //     for(int j=i+1;j<10;j++){
    //         if(a[j]<a[min]) min=j;
    //     }
    //     if(min!=i){
    //         int temp= a[i];
    //         a[i]= a[min];
    //         a[min]= temp;
    //     }
    // }
    sort(a,14);
    for(int i=0;i<14;i++){
        printf("%d ",a[i]);
    }
}