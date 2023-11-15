#include<iostream>
using namespace std;
int main(){
    int row, col, n;
    cout<<"Enter The Number of Rows=";
    cin>>n;

    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            cout<<row+col-1<<" ";
        }
        cout<<endl;
    }
}
