/*
Problem: Sort Array By Parity
Question No: 905
Platform: LeetCode
Difficulty: Easy

Approach:
We use a two-pointer approach.
- Pointer j keeps track of the position to place the next even number.
- Traverse array using pointer i.
- If nums[i] is even, swap it with nums[j] and increment j.
*/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        int j = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 == 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }

        return nums;
    }
};