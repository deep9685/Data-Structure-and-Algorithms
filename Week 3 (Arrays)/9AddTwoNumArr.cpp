#include<iostream>
using namespace std;

int main()
{
    int A[] = {9,5,4,9};
    int B[] = {2,1,4};

    int a = 4;
    int b = 3;

    int i=a-1;
    int j=b-1;

    vector<int> arr;

    int carry = 0;
    while(i >= 0 && j >= 0){
        int x = A[i] + B[j] + carry;
        int digit = x%10;
        carry = x/10;
        arr.push_back(digit);
        i--;
        j--;
    }

    while(i>=0){
        int x = A[i] + 0 + carry;
        int digit = x%10;
        carry = x/10;
        arr.push_back(digit);
        i--;
    }

    while(j>=0){
        int x = 0 + B[j] + carry;
        int digit = x%10;
        carry = x/10;
        arr.push_back(digit);
        j--;
    }

    if(carry){
        arr.push_back(carry);
    }

    for(int i=arr.size()-1; i>=0; i++){
        cout<<arr[i];
    }

    return 0;
}