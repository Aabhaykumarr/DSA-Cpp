/*
LeetCode Problem: 567 - Permutation in String

Difficulty: Medium

----------------------------------------------------
Approach (Sliding Window + Frequency Count):

- A permutation of s1 means:
  Any substring of s2 with the same length as s1
  having exactly the same character frequencies.

- First, count the frequency of characters in s1
  using an array of size 26.

- Create a sliding window of size = length of s1
  over string s2 and maintain another frequency array.

- Compare the two frequency arrays:
  - If they are equal → permutation exists → return true.

- Slide the window one character at a time:
  - Add the new character entering the window.
  - Remove the old character leaving the window.
  - Compare frequencies again.

----------------------------------------------------
Time Complexity:
- O(n * 26) ≈ O(n)
  (Each window comparison takes constant time)

Space Complexity:
- O(1)
  (Only two fixed-size arrays of size 26 are used)
----------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    // Helper function to check if two frequency arrays are equal
    bool checkEqual(int a[26], int b[26]) {
        for (int i = 0; i < 26; i++) {
            if (a[i] != b[i])
                return false;
        }
        return true;
    }

public:
    bool checkInclusion(string s1, string s2) {

        // Edge case: s1 cannot be a permutation if it's longer than s2
        if (s1.length() > s2.length())
            return false;

        // Frequency count of s1
        int charCount1[26] = {0};
        for (int i = 0; i < s1.length(); i++) {
            int index = s1[i] - 'a';
            charCount1[index]++;
        }

        int windowSize = s1.length();
        int charCount2[26] = {0};

        int i = 0;

        // Build the first window
        while (i < windowSize && i < s2.length()) {
            int index = s2[i] - 'a';
            charCount2[index]++;
            i++;
        }

        // Check first window
        if (checkEqual(charCount1, charCount2)) {
            return true;
        }

        // Slide the window across s2
        while (i < s2.length()) {

            // Add new character to the window
            int newIndex = s2[i] - 'a';
            charCount2[newIndex]++;

            // Remove old character from the window
            int oldIndex = s2[i - windowSize] - 'a';
            charCount2[oldIndex]--;

            i++;

            // Check after sliding
            if (checkEqual(charCount1, charCount2)) {
                return true;
            }
        }

        return false;
    }
};