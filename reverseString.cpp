#include<iostream>
#include<conio.h>
#include<vector>
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

    int nthUglyNumber(int n) {
        vector<int> ans, two,three,five;
        ans.push_back(1);
        int i=2;
        while(i<1690){
            if(i%2==0){
                ans.push_back(i);
            }
            else if(i%3==0){
                ans.push_back(i);
            }
            else if(i%5==0){
                ans.push_back(i);
            }
        }
        for(i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        return ans[n+1];
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