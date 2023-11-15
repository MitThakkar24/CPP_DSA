#include<iostream>
using namespace std;
int main(){
    int i,j,space, n=4;
    for(i=n;i>0;i--){
        for(space=n-i;space>0;space--){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}