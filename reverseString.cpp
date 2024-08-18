#include<iostream>
#include<conio.h>
using namespace std;
void reverse(string a,int size,int i=0){
    if(size==i){
        return;
    }
    else{
        char ans=a[i];
        reverse(a,size,++i);
        cout<<ans;
    }
}
int len(string a,int i=0){
    if(a[i]=='\0'){
        return 0;
    }
    else return 1+len(a,++i);
}
bool checkPlaindrome(string a, int b, int i=0){
    if(a[i]!=a[b]) return false;
    else if(i==b) return true;
    return checkPlaindrome(a,--b,++i);
}
int pow(int a,int b){
    if(b==0){
        return 1;
    }
    // else{
    //     return a*pow(a,--b);
    // }
    else{
        int ans=pow(a,b/2);
        if(b%2==0){      
            return ans*ans;
        }
        else{
            return a*ans*ans;
        }
    }
}
int main(){
    string a= "Hiteshree's the only girl I like";   
    reverse(a,len(a));
    a="qwerty54trewq5";
cout<<endl;
    if(checkPlaindrome(a,len(a)-1)){
        cout<<a<<" is a palinrome\n";
    }
    else{
        cout<<a<<" is not a palindrome\n";
    }
cout<<"\n"<<pow(2,11);
    return 0;
}