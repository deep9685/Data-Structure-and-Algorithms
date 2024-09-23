// Leetcode 852
#include<iostream>
using namespace std;

int findPeakEle(int arr[], int n){
    int s = 0;
    int e = n-1;

    while (s<e)
    {
        int mid = s + ((e-s)/2);

        if(arr[mid] < arr[mid+1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
    }
    return e;
}

int main()
{
    int arr[] = {0,11,5,2};
    int n = 4;

    int result = findPeakEle(arr, n);

    cout<<"Peak element is : "<<arr[result];

    return 0;
}