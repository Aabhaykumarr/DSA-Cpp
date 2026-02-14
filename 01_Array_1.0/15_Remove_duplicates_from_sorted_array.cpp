/*
Problem: Remove Duplicates from Sorted Array
Platform: LeetCode
Difficulty: Easy

Approach:
We use the two-pointer technique.
- Pointer i keeps track of the last unique element.
- Pointer j scans the array.
- When a new unique element is found, move i forward
  and overwrite nums[i] with nums[j].
- Count tracks number of unique elements.
*/

#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if(nums.size() == 0) return 0;

        int i = 0;
        int j = i + 1;
        int e = nums.size();
        int count = 1;

        while(j < e){

            if(nums[i] == nums[j]){
                j++;  // Skip duplicate
            } 
            else{
                i++;
                nums[i] = nums[j];  // Move unique element forward
                j++;
                count++;
            }
        }

        return count;
    }
};