#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,3,7,9,11,13,15,19};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target = 14;

    int start = 0;
    int end = n-1;

    while (start <= end)
    {
        int mid = start + ((end-start)/2);

        if(arr[mid] == target){
            cout<<"Target present at index : "<<mid;
            return 0;
        }
        else if(arr[mid] < target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }

    cout<<"Target not found"<<endl;

    return 0;
    
}