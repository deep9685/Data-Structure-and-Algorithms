#include<iostream>
#include<vector>
using namespace std;

 int main()
 {
    vector<int> arr = {1,3,5,3,4};
    vector<int> arr2(5+1, 0);

    for(int i=0; i<arr.size(); i++){
        
        arr2[arr[i]] = 1;
    }

    for(int i=1; i<arr2.size(); i++){
        if(arr2[i] == 0){
            cout<<"Missing element is : "<< i;
            return 0;
        }
    }

    return 0;
 }