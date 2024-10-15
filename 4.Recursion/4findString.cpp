#include<iostream>
using namespace std;

int findTarget(string str, char ch, int index){
    if(index >= str.length()){
        return -1;
    }

    if(str[index] == ch){
        return index;
    }

    return findTarget(str,ch,index+1);
}

int main(){
    string str = "lovebabbar";
    char target = 'z';
    int index=0;
    int ans = findTarget(str,target,index);

    if(ans != -1){
        cout<<"Target fount at index : "<<ans<<endl;
    }
    else{
        cout<<"Target not found."<<endl;
    }

    return 0;
}