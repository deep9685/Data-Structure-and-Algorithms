
// Leetcode - 14;

// The big brained concept here seems to be this:

// If the array is sorted alphabetically then you can assume that the first element of the array and the last element of 
// the array will have most different prefixes of all comparisons that could be made between strings in the array. 
// If this is true, you only have to compare these two strings.
class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        string ans="";
        sort(v.begin(),v.end()); 
        int n=v.size();
        string first=v[0],last=v[n-1];
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                return ans;
            }
            ans+=first[i];
        }
        return ans;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";

        int i = 0;
        while(true){
            string s = strs[0];

            bool check = true;

            for(string str : strs){
                if(i >= str.size()){
                    check = false;
                    break;
                }
                if(s[i] != str[i]){
                    check = false;
                    break;
                }
            }

            if(check){
                ans.push_back(s[i]);
            }
            else{
                break;
            }
            i++;
        }
        return ans;
    }
};