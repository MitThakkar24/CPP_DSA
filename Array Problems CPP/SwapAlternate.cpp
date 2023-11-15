#include<iostream>
using namespace std;

void AlternateSwap(int ar[],int n){
    for(int i=0;i<n;i+=2){
        if((i+1)<n){
            swap(ar[i],ar[i+1]);
        }
    }
}

void ArrayInput(int ar[], int n){
    for(int i=0;i<n;i++){
        cout<<i<<" Element = ";
        cin>>ar[i];
    }
}

void PrintArray(int ar[],int n){
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
}

int main(){
    int ar[100];
    int n;
    
    cout<<"Enter Size of Array=";
    cin>>n;

    ArrayInput(ar,n);
    AlternateSwap(ar,n);
    PrintArray(ar,n); 
}