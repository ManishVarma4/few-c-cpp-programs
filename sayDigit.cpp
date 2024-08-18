#include<iostream>
#include<conio.h>
using namespace std;
string tab[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void say(long long int n){
    if(n==0){
        return;
    }
    else{
        say(n/10);
        int t= n%10;
        cout<<tab[t]<<" ";  
    }
}
int main(){
    long long int i=7875637402;
    say(i);
    return 0;
}
