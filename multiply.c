#include<stdio.h>
void main(){
    int a[]={1,2,6,4,5,4,3,2,1};
    long long int pro=1;
    for(int i=0;i<9;i++){
        pro*=a[i];
    }
    for(int i=0;i<9;i++){
        a[i]= pro/a[i];
        printf("%d ",a[i]);
    }
    
}