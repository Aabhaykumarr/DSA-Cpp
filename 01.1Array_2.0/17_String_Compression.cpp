/*
    LeetCode 443 - String Compression
    Difficulty: Medium

    Approach:
    - Use two pointers:
        i        -> read pointer (start of current group)
        ansIndex -> write pointer (compressed result index)
    - Traverse the array group by group
    - For each group:
        1. Store the character
        2. Calculate frequency (j - i)
        3. Store frequency digits only if count > 1
    - Modify the array in-place

    Time Complexity: O(n)
    Space Complexity: O(1)
*/
#include <bits/stdc++.h>
using namespace std;
using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {

        int i = 0;          // read pointer
        int ansIndex = 0;   // write pointer

        while (i < chars.size()) {

            int j = i + 1;

            // Find the end of the current character group
            while (j < chars.size() && chars[i] == chars[j]) {
                j++;
            }

            // Store the character
            chars[ansIndex++] = chars[i];

            // Calculate frequency
            int count = j - i;

            // Store count digits if frequency > 1
            if (count > 1) {
                string cnt = to_string(count);
                for (char ch : cnt) {
                    chars[ansIndex++] = ch;
                }
            }

            // Move to the next group
            i = j;
        }

        return ansIndex;
    }
};