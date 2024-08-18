#include<stdio.h>
void main(){
    int a[]={1,2,6,4,5,4,3,2,1};
    // int max1=-999;
    // int b[9]=a;
    //sort(b)
    int b[]={1,1,2,2,3,4,4,5,6};
    int max1= b[8];
    int max2= b[7];
    int k,l;
    for(int i=0;i<9;i++){
        if(a[i]==max1) k=i;
        if(a[i]== max2) l=i;
    }
    // int bb= abs(k-l) +1;
    // int size= max2*bb;
    // for(int i=k+1;i<l;i++){
    //     size-=a[i];
    // }
    // printf("%d\n",size);
    int low=k<l?k:l;
    int ub= k<l?l:k;
    int bb= ub-low;
    int size= bb*max2;
    for(int i=low+1;i<ub;i++){
        size-=a[i];
    }
     printf("%d\n",size);



    
}