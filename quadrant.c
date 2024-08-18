#include<stdio.h>
void main(){
    int a[]={34,56,27,1,35,67,89,45,78,34};
    for(int i=0;i<10;i++){
        for(int j=i;j<10;j++){
            // for(int k=i;k<=j;k++){
            //     __mingw_printf("%d ",a[k]);
            // }
            printf("(%d, %d)\n",i,j);
            // printf("\n");
        }
    }
}