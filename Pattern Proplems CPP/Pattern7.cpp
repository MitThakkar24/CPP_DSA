#include<iostream>
using namespace std;
int main(){
    int i,j, space, n=4;

    for(i=1;i<=n;i++){
        for(space=2*n-i;space>0;space-=1){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<j<<"";
        }
        for(j=i-1;j>0;j--){
            cout<<j<<"";
        }
    cout<<endl;
    }
    
}