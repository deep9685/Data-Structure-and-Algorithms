// this solution give TLE so we need to optimize it.
// Leetcode : 70
class Solution {
public:
    int solve(int n){
        if(n==0 || n==1){
            return 1;
        }

        return solve(n-1)+solve(n-2);
    }
    int climbStairs(int n) {
        int result = solve(n);
        return result;
    }
};