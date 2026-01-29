/*
LeetCode Problem 11: Container With Most Water
Link: https://leetcode.com/problems/container-with-most-water/

Approach:
- Two pointers (left & right)
- Calculate area: min(height[left], height[right]) * width
- Move the pointer with smaller height inward

Time Complexity: O(n)
Space Complexity: O(1)
*/
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int s=0;
        int e=height.size()-1;
        int ans=0;
        while(s<e){
            int w=min(height[s],height[e]);
            int h= (e-s);
            int area= w*h;
            ans = max(area,ans);
           if (height[s] < height[e]) {
                  s++;  
                } else {
                    e--;   
                        }
        }
        return ans;
        

        
    }
};