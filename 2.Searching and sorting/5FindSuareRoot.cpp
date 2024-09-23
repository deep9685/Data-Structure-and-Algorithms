#include<iostream>
using namespace std;

int SquareRoot(int n){
    int s = 1;
    int e = n-1;
    int ans = -1;

    while (s<=e)
    {
        int mid  = s + ((e-s)/2);

        if(mid*mid == n){
            return mid;
        }
        else if(mid*mid > n){
            e = mid-1;
        }
        else{
            ans = mid;
            s = mid + 1;
        }
    }

    return ans;
    
}

int main()
{
    int num;
    cout<<"Entera number to find its square root : ";
    cin>>num;

    int result = SquareRoot(num);
    cout<<result;

    int precision;
    cout<<"Enter no. of precision you want : ";
    cin>>precision;

    double step = 0.1;
    double finalAns = result;

    for(int i=0; i<precision; i++){
        for(double j = finalAns; j*j<=num; j = j+step){
            finalAns = j;
        }
        step /= 10;
    }

    cout<<"Final ans : "<<finalAns;
    
    return 0;
}