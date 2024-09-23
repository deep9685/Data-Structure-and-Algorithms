#include<iostream>
using namespace std;

int main()
{
    int dividend = 225;
    int divisor = 25;

    int s = 1;
    int e = dividend;

    int ans;

    while(s <= e){
        int mid = s + ((e-s)/2);

        if(divisor * mid <= dividend){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }

    cout<<"Approx ans "<<ans<<endl;

    return 0;
}