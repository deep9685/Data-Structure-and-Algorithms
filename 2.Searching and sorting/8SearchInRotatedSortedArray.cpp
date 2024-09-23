#include<iostream>
#include<vector>

using namespace std;

int findPivot(vector<int> arr, int n)
{
    int s = 0;
    int e = n-1;

    while(s<e){
        int mid = s + ((e-s)/2);

        if(arr[mid] > arr[mid+1] && mid+1 < n ){
            return mid;
        }
        else if(arr[mid-1] > arr[mid] && mid-1 >= 0){
            return mid-1;
        }

        if(arr[s] > arr[mid]){
            e = mid-1;
        }
        else{
            s = mid;
        }
    }
}

int findInRotatedSortedArr(vector<int> arr, int n, int target){
    int pivot = findPivot(arr,n);
    int s,e;

    if(target >= arr[0] && target <= arr[pivot]){
        s = 0;
        e = pivot;
    }
    else if(target >= arr[pivot+1] && target <= arr[n-1]){
        s = pivot+1;
        e = n-1;
    }
    else{
        return -1;
    }

    while(s <= e){
        int mid = s + ((e-s)/2);

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }

    return -1;
}

int main(){
    vector<int> arr = {4,5,6,7,0,1,2,3};
    int n = arr.size();
    int target = 2;

    int result = findInRotatedSortedArr(arr, n, target);

    if(result != -1){
        cout<<"Target found at "<<result<<" index";
    }
    else{
        cout<<"Target not found";
    }
}