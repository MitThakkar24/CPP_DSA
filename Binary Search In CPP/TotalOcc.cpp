#include<iostream>
using namespace std;

int Last(int arr[], int n, int key){
    int s=0, e=n-1;
    int mid= s + (e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans= mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s= mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int First(int arr[], int n, int key){
    int s=0, e=n-1;
    int mid= s + (e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans= mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s= mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){
    int even[6]={1,2,3,3,3,5};
    int first=First(even, 7, 3);
    int last=Last(even, 7, 3);

    int total= last-first+1;
    cout<<"Total Number Of Occ is "<<total;
    return 0;
}