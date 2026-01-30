/*
    Problem: 344. Reverse String
    Platform: LeetCode
    Difficulty: Easy

    Description:
    - Reverse the input character array in-place.
    - Use O(1) extra memory.

    Approach:
    - Two-pointer technique.
    - Swap characters from start and end.
    - Move pointers toward the center.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
       int st=0,e=s.size()-1;
       while(st<=e){
        swap(s[st],s[e]);
        st++;
        e--;
       }   
    }
};