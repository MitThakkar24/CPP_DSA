#include<iostream>
using namespace std;

int main(){
    int ar1[15];
    //accessing the array
    cout<<"At location 1="<<ar1[1]<<endl;
    
    //Accessing at location
    int a[3]={1,2,3};
    cout<<"2nd Location="<<a[2]<<endl;

    //printing the array
    int ar4[10]={0};
    int n=10;
    int i;
    for(i=0;i<n;i++){
        cout<<ar4[i]<<" ";
    }
}