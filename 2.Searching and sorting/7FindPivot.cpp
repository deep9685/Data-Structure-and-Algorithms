#include<iostream>
#include<vector>
using namespace std;

int PivotElement(vector<int> arr, int n)
{
    int s = 0;
    int e = n-1;

    while(s<=e){
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
            s = mid+1;
        }
    }
}

int main()
{
    vector<int> arr = {3,4,5,6,7,1,2};
    
    int n = arr.size();

    int result = PivotElement(arr,n);

    cout<<"Pivot element is "<<arr[result];

    return 0;
}