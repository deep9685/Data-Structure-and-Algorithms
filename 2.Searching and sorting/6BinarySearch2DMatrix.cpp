#include<iostream>
using namespace std;

int Search(int arr[][4], int rows, int cols, int target){
    int start = 0;
    int end = ((rows*cols) - 1);

    while(start <= end){
        int mid = start+ ((end - start)/2);

        int rowIndex = mid/cols;
        int colIndex = mid%cols;

        if(arr[rowIndex][colIndex] == target){
            return mid;
        }
        else if(arr[rowIndex][colIndex] < target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

int main()
{
    int arr[][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16},
                    {17,18,19,20}
                    };
    
    int rows = 5;
    int cols = 4;
    int target = 18;

    int result = Search(arr, rows, cols, target);

    if(result != -1){
        cout<<"Target found at rowIndex "<<result/cols<<" and colIndex "<<result%cols;
    }
    else{
        cout<<"Target not found.";
    }
    return 0;
}