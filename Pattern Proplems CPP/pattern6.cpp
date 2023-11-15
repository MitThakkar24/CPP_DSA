#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
    char ch;
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            ch='A'+i+j-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}