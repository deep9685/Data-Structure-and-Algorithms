// Leetcode - 1910
// write logic for find and erase function yourself.

class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.find(part) != std::string::npos){
            int index = s.find(part);
            s.erase(index, part.length());
        }

        return s;
    }
};