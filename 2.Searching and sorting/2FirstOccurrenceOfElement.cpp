#include<iostream>
using namespace std;

int FirstOccurrence(int arr[], int target, int n){
    int s = 0;
    int e = n-1;
    int ans = -1;

    while(s<=e){
        int mid = s + ((e-s)/2);

        if(arr[mid] == target){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid] < target){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }

    return ans;
}

int main()
{
    int arr[] = {1,3,4,4,4,4,4,6,7,9};
    int target = 3;
    int n = 10;

    int result = FirstOccurrence(arr, target, n);

    if(result != -1){
        cout<<"Target first occurrence found at "<<result;
    }
    else{
        cout<<"Target not found";
    }

    return 0;
}