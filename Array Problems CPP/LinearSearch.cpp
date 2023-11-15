#include<iostream>
using namespace std;

bool LinearSearch(int ar[],int n, int present){

    for(int i=0;i<n;i++){

        if(ar[i]==present){
            return 1;
        }

    }
    return 0;
}

int main(){
    int array[100];
    int size;
    cout<<"Enter Size of array=";
    cin>>size;

    for(int i=0 ; i < size ; i++){
        cout<< i << " Element = ";
        cin>>array[i];
    }
    int elmnt;
    cout<<endl<<"Enter The Element You want to find = ";
    cin>>elmnt;

    if(LinearSearch(array,size,elmnt)){
        cout<<"Yes Its Present";
    
    }
    else{
        cout<<"No, Element is not in array";
    }

}