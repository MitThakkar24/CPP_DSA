#include <iostream>
#include<climits>
using namespace std;

int getMin(int num[], int n){
    int min= INT_MAX;

    for(int i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    //Return Min value
    return min;
}

int getMax(int num[], int n){
    int max= INT_MIN;

    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    //Return Max value
    return max;
}

int main(){
    int size;
    cin>>size;

    int array[100];

    //taking input in array
    for(int i=0;i<size;i++){
        cin>>array[i];
    }

    //output
    cout<<"Min Value is "<<getMin(array,size)<<endl;
    cout<<"Max Value is "<<getMax(array,size)<<endl;

    //using predefined function 
    int mini=INT_MAX;
    for(int i=0;i<size;i++){
        mini=min(mini,array[i]);
    }
    cout<<endl<<"Min value Using Function "<<mini;

    int maxi=INT_MIN;
    for(int i=0;i<size;i++){
        maxi=max(maxi,array[i]);
    }
    cout<<endl<<"Max value Using Function "<<maxi;
}