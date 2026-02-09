/*
LeetCode Problem 74: Search a 2D Matrix
Difficulty: Medium

Approach:
- Treat matrix as a 1D sorted array of size row*col
- Calculate row = mid / col, column = mid % col
- Perform standard binary search

Time Complexity: O(log(m*n)) where m = rows, n = cols
Space Complexity: O(1) - no extra space
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s=0;
        int row=matrix.size();
        int col=matrix[0].size();
        int e=(row * col)-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            int element=matrix[mid/col][mid%col];
            if(element==target){
                return true;
            } else if(element < target ){
                s=mid+1;
            } else {
                e=mid-1;
            }
         mid=s+(e-s)/2;
        }
    return false;
    }
};