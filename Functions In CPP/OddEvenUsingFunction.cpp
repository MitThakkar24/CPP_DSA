#include<iostream>
using namespace std;

bool isEven(int n){
    if(n&1){
        return 0;
    }
    return 1;
}
int main(){
    int a;
    cin>>a;

    if(isEven(a)){
        cout<<"Number even";
    }
    else{
        cout<<"Not Even";
    }
}