#include <iostream>
#include <vector>

using namespace std;

void Solution(vector<int>& arr){
    int l = 0;
    int h = arr.size() - 1;

    while(l<h){
        if(arr[l] < 0){
            l++;
        }
        else if(arr[h] > 0)
        {
            h--;
        }
        else
        {
            swap(arr[l], arr[h]);
            l++;
            h--;
        }
    }
}

int main()
{
    cout<<"Hello";
    vector<int> arr = {1,2,-3,4,-5,6};

    Solution(arr);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}