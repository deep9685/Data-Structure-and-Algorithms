#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {3,1,1,4,2};
    vector<int> arr2(5, 0);

    for(int i=0; i<arr.size(); i++){
        if(arr2[arr[i]] > 0){
            cout<<"Duplicate number is : "<<arr[i];
            return 0; 
        }
        arr2[arr[i]] = 1;
    };

    return 0;
}