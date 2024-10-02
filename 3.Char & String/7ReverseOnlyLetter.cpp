// Leetcode - 917

class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i = 0;
        int j = s.length()-1;

        while(i <= j){
            if(isalpha(s[i]) && isalpha(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
                cout<<s<<endl;
            }
            else if(!isalpha(s[i])){
                i++;
            }
            else{
                j--;
            }
        }

        return s;
    }
};