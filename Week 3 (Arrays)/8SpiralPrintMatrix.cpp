// leetcode 54. Spiral Matrix

#include<iostream>
using namespace std;

int main()
{
    class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        int m = matrix.size();
        int n = matrix[0].size();
        int total_elements = m * n;

        int startingRow = 0;
        int endingCol = n - 1;
        int endingRow = m - 1;
        int startingCol = 0;

        int count = 0;
        while (count < total_elements) {
            // print straight row
            for (int i = startingCol; i <= endingCol && count < total_elements;
                 i++) {
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;

            // print last column
            for (int i = startingRow; i <= endingRow && count < total_elements;
                 i++) {
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;

            // print last row
            for (int i = endingCol; i >= startingCol && count < total_elements;
                 i--) {
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;

            // print starting col;
            for (int i = endingRow; i >= startingRow && count < total_elements;
                 i--) {
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }

        return ans;
    }
};
}