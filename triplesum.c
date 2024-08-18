#include<stdio.h>
//brute_force Approach
void main(){
    int a[]={34,56,27,1,35,67,89,45,78,34};
    int tar=50;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
                if(i==j ||i==k||k==j) continue;
                else{
                    if(a[i]+a[j]+a[k]>=tar) printf("%d %d %d\n",a[i],a[j],a[k]);
                }
            }
        }
    }

}