/*
LeetCode Problem: 1910 - Remove All Occurrences of a Substring
Difficulty: Medium

Approach:
- Repeatedly find the substring `part` in `s`
- Erase it whenever found
- Continue until no occurrence exists

Time Complexity: O(n * m)
Space Complexity: O(1) extra space (in-place modification)
*/

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        while (s.length() > 0 && s.find(part) < s.length()) {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};