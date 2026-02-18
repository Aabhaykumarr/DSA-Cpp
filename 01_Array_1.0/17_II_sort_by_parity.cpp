/*
Problem: Sort Array By Parity II
Question No: 922
Platform: LeetCode
Difficulty: Easy

// Time Complexity: O(n)
// Space Complexity: O(1)

Approach:
- Use two pointers:
  even_index starts at 0 (checks even positions)
  odd_index starts at 1 (checks odd positions)
- If even_index contains an odd number,
  find an even number at odd_index and swap.
*/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {

        int even_index = 0;
        int odd_index = 1;
        int n = nums.size();

        while(even_index < n && odd_index < n){

            if(nums[even_index] % 2 != 0){

                while(odd_index < n && nums[odd_index] % 2 != 0){
                    odd_index += 2;
                }

                if(odd_index < n){
                    swap(nums[even_index], nums[odd_index]);
                }
            }

            even_index += 2;
        }

        return nums;
    }
};