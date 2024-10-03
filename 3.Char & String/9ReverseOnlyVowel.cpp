// Leetcode : 345

class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.length();
        string vowel = "aeiouAEIOU";

        while(i <= j){
            if(vowel.find(s[i]) != std::string::npos && vowel.find(s[j]) != std::string::npos){
                swap(s[i], s[j]);
                i++;
                j--;
            }else if(vowel.find(s[i]) == std::string::npos){
                i++;
            }else{
                j--;
            }
        }
        return s;
    }
};