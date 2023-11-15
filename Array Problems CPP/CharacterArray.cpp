#include<iostream>
using namespace std;

void printArray(char arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<"";
    }
}
int main()
{
        char ary[3]={'M','I','T'};
        char n=3;
        printArray(ary,n);
}