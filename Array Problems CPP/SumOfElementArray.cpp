#include<iostream>
using namespace std;

int sumArray(int ar[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum = sum + ar[i];
    }
    return sum;
}

int main(){
    int a[100];
    int size;

    cout<<"Enter The Size Of Array=";
    cin>>size;

    for (int i=0;i<size;i++){
        cout<<i<<" Element=";
        cin>>a[i];
    }
    cout<<"Sum Is "<<sumArray(a,size);
}