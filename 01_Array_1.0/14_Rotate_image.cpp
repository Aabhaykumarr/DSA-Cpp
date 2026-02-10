/*
    LeetCode 48: Rotate Image

    Problem Description:
    --------------------
    You are given an n x n 2D matrix representing an image.
    Rotate the image by 90 degrees clockwise IN-PLACE.
    You are not allowed to use any extra 2D matrix.

    Approach:
    ---------
    - Rotate the matrix layer by layer starting from the outermost layer.
    - For each layer, perform a 4-way swap of elements.
    - A temporary variable is used to store one value during rotation.

    Rotation Mapping:
    -----------------
    top-left     -> top-right
    bottom-left  -> top-left
    bottom-right -> bottom-left
    top-right    -> bottom-right

    Time Complexity:
    ---------------
    O(n^2)
    Each element of the matrix is visited exactly once.

    Space Complexity:
    ----------------
    O(1)
    Rotation is done in-place without using extra space.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // Traverse each layer
        for (int i = 0; i < n / 2; i++) {

            // Traverse elements in the current layer
            for (int j = i; j < n - i - 1; j++) {

                int temp = matrix[i][j];

                // Move bottom-left to top-left
                matrix[i][j] = matrix[n - 1 - j][i];

                // Move bottom-right to bottom-left
                matrix[n - 1 - j][i] = matrix[n - i - 1][n - j - 1];

                // Move top-right to bottom-right
                matrix[n - i - 1][n - j - 1] = matrix[j][n - i - 1];

                // Assign temp (top-left) to top-right
                matrix[j][n - i - 1] = temp;
            }
        }
    }
};