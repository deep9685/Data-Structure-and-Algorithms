#include<iostream>
using namespace std;

int findMissingEle(int arr[], int n){
    int s = 0;
    int e = n-1;
    int ans = -1;

    while(s<=e){
        int mid = s + ((e-s)/2);

        if(arr[mid]-mid == 2){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return ans+1;
}

int main()
{
    int arr[] = {2,3,4,5,6,7,8};
    int n = 7;

    int result = findMissingEle(arr,n);

    cout<<"Missing element is : "<<result;

    return 0;
}