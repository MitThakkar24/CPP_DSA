#include<iostream>
using namespace std;

void fib(int n){
    int crr=0;
    int next=1;
    cout<<crr<<" "<<next<<" " ;

    for(int i=2;i<n;i++){
        int temp=next;
        next= next+crr;
        cout<<next<<" ";
        crr=temp;  
    }
}

int main(){
    int n;
    cin>>n;
    fib(n);

}