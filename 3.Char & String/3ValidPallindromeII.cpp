// leetcode - 680
class Solution {
public:
    bool checkPallindrome(string s, int start, int end){

        while(start <= end){
            if(s[start]!=s[end]){
                return false;
            }
            start++;
            end--;
        }

        return true;

    }
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length()-1;

        while(i <= j){
            if(s[i] != s[j]){
                if(checkPallindrome(s, i+1, j) || checkPallindrome(s, i, j-1)){
                    return true;
                }
                else{
                    return false;
                }
            }
            i++;
            j--;
        }

        return true;
    }
};