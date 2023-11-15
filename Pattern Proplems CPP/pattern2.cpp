#include<iostream>
using namespace std;
int main(){
    int row, col, n;
    int count = 1;
    cout<<"Enter The Number of Rows=";
    cin>>n;

    for(row=1;row<=n;row++){
        int colnum=2;
        for(col=1;col<=row;col++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}
