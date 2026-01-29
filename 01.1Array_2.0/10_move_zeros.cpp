#include <bits/stdc++.h>
using namespace std;

/*
-------------------------------------------------
LeetCode 283 - Move Zeroes
-------------------------------------------------
Problem:
Move all zeroes to the end of the array while
maintaining the relative order of non-zero elements.

Approach:
- Use two pointers
- Pointer `j` keeps track of position of next non-zero
- Swap current non-zero with position `j`

Time Complexity: O(n)
Space Complexity: O(1)
-------------------------------------------------
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;  // position for next non-zero element

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};

/*
Example:
Input:  [0,1,0,3,12]
Output: [1,3,12,0,0]
*/