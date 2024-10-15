#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int> arr, int n, int index){
    if(index >= n-1){
        return true;
    }

    if(arr[index] > arr[index+1]){
        return false;
    }

    return isSorted(arr,n,index+1);
}

int main(){
    vector<int> arr = {2,4,6,7,8};
    int n = arr.size();
    int index = 0;
    bool ans = isSorted(arr,n,index);
    if(ans){
        cout<<"Arr is sorted.";
    }
    else{
        cout<<"Array is not sorted.";
    }

    return 0;
}