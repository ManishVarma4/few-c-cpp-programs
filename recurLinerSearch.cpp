#include<iostream>
#include<conio.h>
using namespace std;
int search(int a[], int elem,int size,int i){
    if(size==0){
        return -1;
    }
    else{
        if(a[0]==elem) return i+1;
        else{
            return search(a+1,elem,size-1,++i);
        }
    }
}
int main(){
    int a[]={1,2,3,4,5};
    cout<<search(a,9,5,0);
    return 0;
}