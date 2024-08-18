#include<iostream>
#include<conio.h>
using namespace std;
void join(int *a,int s,int e){
    int mid= (s+e)/2;
    int len1= mid-s+1;
    int len2= e-mid;
    int *first = new int[len1];
    int *second = new int[len2];
    int startArray= s;
    for(int i=0;i<len1;i++){
        first[i]= a[startArray++];
    }
    startArray=mid+1;
    for(int i=0;i<len2;i++){
        second[i]= a[startArray++];
    }
    //merging
    int index1=0,index2=0;
    startArray=s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            a[startArray++]= first[index1++];
        }
        else{
            a[startArray++]= second[index2++];
        }
    }
    while(index1<len1){
        a[startArray++]= first[index1++];
    }
    while(index2<len2){
        a[startArray++]= second[index2++];
    }
    delete []first;
    delete []second;

}
void merge(int *a, int s, int e){
    if(s>=e) return;
    else{
        int mid= (s+e)/2;
        merge(a,s,mid);
        merge(a,mid+1,e);
        join(a,s,e);
    }
}
int main(){
    int a[10]={6,4,6,3,66,45,23,1,23,45};
    merge(a,0,10);
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}