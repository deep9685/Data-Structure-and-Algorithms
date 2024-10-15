#include<iostream>
using namespace std;

void Solve(string str, string ans, int i){
    if(i >= str.length()){
        cout<<ans<<" ";
        return;
    }

    // exclude
    Solve(str, ans, i+1);

    // include
    ans += str[i];
    Solve(str, ans, i+1);
}

int main(){
    string str = "xy";
    string ans = "";

    int i = 0;
    Solve(str, ans, i);

    return 0;
}
