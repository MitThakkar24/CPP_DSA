#include <iostream>
using namespace std;
void printArray(int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
        int ary[10]={0};
        int n=10;
        printArray(ary,n);
}