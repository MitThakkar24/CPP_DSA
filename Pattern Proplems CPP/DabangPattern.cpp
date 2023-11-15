#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
    int temp;
    for(i=n;i>0;i--){
        temp=1;

        for(j=i;j>0;j--){
            cout<<temp;
            temp++;
       }

        for(j=0;j<2*n-2*i;j++){
            cout<<"*";
       }
        temp=i;
        for(j=i;j>0;j--){
            cout<<temp;
            temp--;
       }
       cout<<endl;
    }
}