#include<iostream>
using namespace std;

int findMax(int arr[], int maxi, int index, int n){
    if(index >= n){
        return maxi;
    }

    maxi = max(maxi, arr[index]);

    findMax(arr, maxi, index+1, n);
}

int findMin(int arr[], int mini, int index, int n){
    if(index >= n){
        return mini;
    }

    mini = min(mini, arr[index]);

    findMin(arr, mini, index+1, n);
}

int main(){
    int arr[] = {2,4,5,2,4,6,8,9,5,3,8,0,3};

    int maxi = INT16_MIN;
    int index = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxNum = findMax(arr,maxi,index,n);
    cout<<"Max number is "<<maxNum<<endl;

    int mini = INT16_MAX;
    index=0;
    int minNum = findMin(arr,mini,index,n);
    cout<<"Min number is "<<minNum<<endl;

    return 0;
}