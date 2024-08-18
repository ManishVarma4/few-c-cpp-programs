#include<iostream>
#include<conio.h>
using namespace std;
int pivot(int *a,int s,int e){
    int c=0;
    for(int i=s+1;i<=e;i++){
        if(a[i]<a[s])c++;
    }
    int temp= a[s];
    a[s]=a[s+c];
    a[s+c]=temp;
    int i=s,j=e;
    while(i<j){
        if(a[i]>a[s+c]&& a[j]<a[s+c]){
            temp= a[i];
            a[j]=a[i];
            a[i]=temp;
            i++;
            j--;
        }
        else if(a[i]>a[s+c]) j--;
        else i++;
    }
    return s+c;
}
void quickSort(int *a,int s,int e){
    if(s>=e) return;
    else{
        int p= pivot(a,s,e);
        quickSort(a,s,p);
        quickSort(a,p+1,e);
    }
}
int main(){
    int a[10]={10,9,8,7,6,5,4,3,2,1};
    quickSort(a,0,9);
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}