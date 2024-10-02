// Leetcode - 242
// because the length of character are only 256 and the word lies in it so we can play with their index.

class Solution {
public:
    bool usingsort(string s, string t){
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        if(s == t){
            return true;
        }else{
            return false;
        }
    }
    bool isAnagram(string s, string t) {
        // method 1
        // bool ans = usingsort(s,t);
        // return ans;

        // method 2
        int ans2 = usingCount(s,t);
        return ans2;
    }

    bool usingCount(string s,string t){
        int arr[256] = {0};
        for(int i=0; i<s.length(); i++){
            arr[s[i]]++;
        }

        for(int i=0; i<t.length(); i++){
            arr[t[i]]--;
        }

        for(int i=0; i<256; i++){
            if(arr[i] != 0){
                return false;
            }
        }

        return true;
    }
};