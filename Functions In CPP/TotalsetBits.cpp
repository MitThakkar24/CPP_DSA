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

int SetBit(int a, int b){
    return count(a)+count(b);
}

int main(){
    int a,b;
    cin>>a;
    cout<<count(a);
}