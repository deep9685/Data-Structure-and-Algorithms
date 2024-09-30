// Leetcode - 1047

class Solution {
public:
    string removeDuplicates(string s) {

        string ans = "";

        for (int i = 0; i < s.length(); i++) {
            if (ans.length() > 0) {
                if (s[i] == ans[ans.length() - 1]) {
                    ans.pop_back();
                } else {
                    ans.push_back(s[i]);
                }
            } else {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};