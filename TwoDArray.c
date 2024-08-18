#include<stdio.h>
void main(){
    int a[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            a[i][j]=i*4+j+1;
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
}