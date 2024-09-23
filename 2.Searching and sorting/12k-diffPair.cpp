// leetcode - 532
class Solution {
public:
    int UsingTwoPointerApproach(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int count = 0;
        int i = 0;
        int j = i + 1;

        set<pair<int, int>> ans;

        while (i < nums.size() && j < nums.size()) {
            int diff = nums[j] - nums[i];

            if (diff == k) {
                ans.insert({nums[i], nums[j]});
                i++;
                j++;
            } else if (diff > k) {
                i++;
            } else {
                j++;
            }
            if (i == j) {
                j++;
            }
        }

        for (auto x : ans) {
            count++;
        }
        return count;
    }

    int binarySearch(vector<int>& nums, int start, int x) {
        int end = nums.size() - 1;

        while (start <= end) {
            int mid = (start + end) / 2;

            if (nums[mid] == x) {
                return mid;
            } else if (x > nums[mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }

    int UsingBinarySearch(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        set<pair<int, int>> ans;

        for (int i = 0; i < nums.size(); i++) {
            if (binarySearch(nums, i + 1, nums[i] + k) != -1) {
                ans.insert({nums[i], k + nums[i]});
            }
        }

        return ans.size();
    }
    int findPairs(vector<int>& nums, int k) {
        // approach 1
        // int result = UsingTwoPointerApproach(nums,k);
        // return result;

        // approach 2
        int result = UsingBinarySearch(nums, k);
        return result;
    }
};