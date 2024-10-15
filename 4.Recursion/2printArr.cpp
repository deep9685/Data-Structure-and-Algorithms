#include<iostream>
using namespace std;

void printArr(int arr[], int index, int n){
    if(index >= n){
        return;
    }

    cout<<arr[index]<<" ";

    printArr(arr, index+1, n);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};

    int index = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    printArr(arr, index, n);
    cout<<endl;

    return 0;
}