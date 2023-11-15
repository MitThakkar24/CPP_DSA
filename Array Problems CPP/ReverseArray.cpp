#include<iostream>
using namespace std;

void reverseArray(int ar[],int n){
    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(ar[start],ar[end]);
        start++;
        end--;
    }
}
void printArray(int ar[], int n){
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
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
    reverseArray(a,size);
    printArray(a,size);
}