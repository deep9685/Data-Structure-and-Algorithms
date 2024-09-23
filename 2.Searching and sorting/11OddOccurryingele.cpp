#include<iostream>
#include<vector>

using namespace std;

int Solve(vector<int>& arr){
    int s = 0;
    int e = arr.size()-1;

    int ans;

    while (s<=e)
    {
        if(s == e)
        {
            //left single element
            return s;
        }
        int mid = s + ((e-s)/2);

        if(mid%2 == 0){
            if(arr[mid] == arr[mid+1]){
                s = mid+2;
            }
            else{
                e = mid;
            }
        }
        else{
            if(arr[mid-1] == arr[mid]){
                s = mid+1;
            }else{
                e = mid-1;
            }
        }
    }

    return -1;
    
}  

int main()
{
    vector<int> arr = {1,1,2,2,3,3,4,4,60,60,3,4,4};

    int result = Solve(arr);

    cout<<"Odd Occurrinng element is "<<arr[result]<<"  "<<result;

    return 0;
}