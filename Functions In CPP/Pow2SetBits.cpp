#include<iostream>
using namespace std;

int count(int n){
    int count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    return count;
}


int main(){
    int a;
    cin>>a;
    if(count(a)==1){
        cout<<a<<" is in power of two";
    }
    else{
        cout<<a<<" is not power of two";
    }
}