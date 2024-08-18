#include<stdio.h>
void main(){
    int max=-999;
    int k;
    int g=1;
    int a[]={1,2,6,4,5,4,3,2,1};

    for(int i=0;i<9;i++){
        if(a[i]>max){
             max=a[i];
             k=i;}
    }
    for(int i=0;i<9;i++){
        if(i<=k){
            if(a[i]>a[i+1]){
                // printf("false");
                g=0;
                break;
            }
            
        }
        else{
                if(a[i]<a[i+1]){
                    // printf("false");
                    g=0;
                    break;
                }
            }
    }
    if(g) printf("true");
    else printf("false");
        // if(!max){
        //     if(a[i]>a[i+1]) max=1;
        //     if(a[i-1]<=a[i] && a[i]>=a[i+1])
        // }
        // else{
        //     if()
        // }
    }
