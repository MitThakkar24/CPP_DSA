#include<iostream>
using namespace std;

bool isPrime(int n){

    for(int i=2;i<n;i++){ 
        if(n%2==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int a;
    cin>>a;

    if(isPrime(a)){
        cout<<"It's Prime Number";
    }
    else{
        cout<<"Its not prime";
    }

}