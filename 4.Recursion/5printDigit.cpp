#include<iostream>
using namespace std;

void printDigit(int n){
    if(n<=0){
        return;
    }

    printDigit(n/10);

    cout<<n%10<<" ";
}

int main(){
    int n = 538;

    printDigit(n);

    return 0;
}