/*
LeetCode Problem: 1844 - Replace All Digits with Characters
Difficulty: Easy

Approach:
- Traverse the string
- For every odd index, replace digit with:
  previous character + digit value
- Modify string in-place (O(1) extra space)

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string replaceDigits(string s) {
        for (int i = 0; i < s.size(); i++) {
            if (i % 2 != 0) {
                s[i] = s[i - 1] + (s[i] - '0');
            }
        }
        return s;
    }
};