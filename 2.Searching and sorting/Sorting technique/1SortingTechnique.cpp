#include<iostream>
#include<vector>

using namespace std;

void SelectionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[i]){
                swap(arr[i], arr[j]);
            }
        }
    }
}

void BubleSort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j< n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void InsertionSort(int arr[], int n){
    for(int round = 1; round < n; round++){
        int value = arr[round];

        int j = round-1;
        for(; j>=0; j--){
            if(arr[j] > value){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = value;
    }
}


int main()
{
    int arr[] = {10,1,4,8,5,7};
    int n = 6;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // SelectionSort(arr, n);

    // BubleSort(arr, n);

    InsertionSort(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}