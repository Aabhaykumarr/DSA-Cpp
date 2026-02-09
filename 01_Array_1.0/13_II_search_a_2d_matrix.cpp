/*
LeetCode Problem 240: Search a 2D Matrix II
Difficulty: Medium

Approach:
- Start from top-right corner of the matrix
- If current element equals target → return true
- If current element < target → move down
- If current element > target → move left
- Repeat until target is found or indices go out of bounds

Time Complexity: O(m + n) where m = rows, n = cols
Space Complexity: O(1) - no extra space used
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();

        int row_index=0;
        int col_index=col-1;
        while(row_index < row && col_index >=0){
            int element=matrix[row_index][col_index];
            if(element == target ){
                return true;
            } else if(element < target){
                row_index++;
            } else {
                col_index--;
            }
        }
    return false;
    }
};