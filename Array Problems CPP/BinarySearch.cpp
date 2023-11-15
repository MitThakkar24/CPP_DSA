#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start=0;
    int end= size - 1;

    int mid= (start+end)/2; //or start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        //go to right
        if(key>arr[mid]){
            start= mid+1;
        }
        else{
            end = mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;

}

int main(){
    int even[6]={2,4,6,8,10,11};
    int odd[7]={1,2,3,4,5,6,7};

    int index= binarySearch(even, 6, 10 );
    cout<<"Index Of 10 is "<<index<<endl;
    int index1= binarySearch(odd, 7, 2 );
    cout<<"Index Of 2 is "<<index1;



}