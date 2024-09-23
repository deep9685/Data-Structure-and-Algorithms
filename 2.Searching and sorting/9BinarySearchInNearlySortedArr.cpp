#include<iostream>
#include<vector>

using namespace std;

int findInNearlySortedArr(vector<int> arr, int n, int target){
    int s = 0;
    int e = n-1;

    while(s <= e){
        int mid = s+((e-s)/2);

        if(arr[mid] == target){
            return mid;
        }
        if(arr[mid+1] == target && mid+1 < n){
            return mid+1;
        }
        if(arr[mid-1] == target && mid-1 >= 0){
            return mid-1;
        }

        if(arr[mid] < target){
            s = mid+2;
        }
        else{
            e = mid-2;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {10,3,40,20,50,80,70};
    int n = arr.size();
    int target = 40;

    int result = findInNearlySortedArr(arr, n, target);

    if(result != -1){
        cout<<"Target found at "<<result<<" index.";
    }
    else{
        cout<<"Target not found.";
    }

    return 0;
}