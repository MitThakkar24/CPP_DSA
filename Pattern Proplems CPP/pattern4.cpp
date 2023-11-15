#include<iostream>
using namespace std;
int main(){
    int row, col, n;
    cout<<"Enter Value of Row=";
    cin>>n;

    for(row=1;row<=n;row++){
        for(col=row;col>0;col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}