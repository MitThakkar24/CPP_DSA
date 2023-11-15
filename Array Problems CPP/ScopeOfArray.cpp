#include<iostream>
using namespace std;
void updateArray(int arr[],int n){
    cout<<"This is In Function"<<endl;
    arr[0]=69;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Out Of function"<<endl;
}

int main(){
    int array[3]={1,2,4};

    updateArray(array,3);

    for(int i=0;i<3;i++){
        cout<<array[i]<<" ";
    }
}