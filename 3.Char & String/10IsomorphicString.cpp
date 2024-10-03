// leetcode - 205

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256] = {0};
        bool isTcharmapped[256] = {0};

        for (int i = 0; i < s.length(); i++) {
            if(hash[s[i]] == 0 && isTcharmapped[t[i]] == 0){
                hash[s[i]] = t[i];
                isTcharmapped[t[i]] = true;
            }
        }

        for(int i=0; i<s.length(); i++){
            if(hash[s[i]] != t[i]) return false;
        }

        return true;
    }
};