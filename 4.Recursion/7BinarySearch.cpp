#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int s, int e, int target){
    if(s>e){
        return -1;
    }
    int mid = s+((e-s)/2);

    if(arr[mid] == target){
        return mid;

    }else if(arr[mid] < target){
        return binarySearch(arr, mid+1, e, target); 
    }
    else{
        return binarySearch(arr, s, mid-1, target);
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int n = arr.size();
    int target = 4;

    int s = 0;
    int e = n-1;
    int ans = binarySearch(arr, s, e, target);

    if(ans != -1){
        cout<<"Target present at index "<<ans;
    }
    else{
        cout<<"Target not found.";
    }

    return 0;
}