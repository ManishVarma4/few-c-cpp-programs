#include<iostream>
#include<conio.h>
using namespace std;
int sum(int a[],int size){
    if(size==0){
        return 0;
    }
    else return a[0] + sum(a+1,size-1);
}
int main(){
    int a[]={1,2,3,4,5};
    cout<<sum(a,5);
    return 0;
}