/*
LeetCode Problem: 2022 - Convert 1D Array Into 2D Array
Difficulty: Easy

--------------------------------------------------
Problem Statement:
--------------------------------------------------
You are given a 1D integer array `original` and two integers `m` and `n`.
Your task is to convert `original` into a 2D array of size m x n such that:

- The total number of elements in the 2D array must be exactly equal
  to the number of elements in `original`
- The elements should be filled row-wise (left to right, top to bottom)

If it is not possible to construct such a 2D array, return an empty array.

--------------------------------------------------
Approach:
--------------------------------------------------
1. First, check if m * n == original.size()
   - If not equal, construction is impossible → return empty array

2. Create a 2D vector `mat` of size m x n

3. Use a single index `idx` to traverse the 1D array

4. Fill the 2D array row by row:
   - mat[i][j] = original[idx]
   - Increment idx after every insertion

--------------------------------------------------
Why use a single index (idx)?
--------------------------------------------------
The 1D array has elements in linear order.
To map it correctly into a 2D structure row-wise,
we move through `original` using one index and place
each value sequentially into the matrix.

--------------------------------------------------
Example:
--------------------------------------------------
original = [1, 2, 3, 4]
m = 2, n = 2

Step-by-step filling:
mat[0][0] = 1
mat[0][1] = 2
mat[1][0] = 3
mat[1][1] = 4

Result:
[[1, 2],
 [3, 4]]

--------------------------------------------------
Time Complexity:
--------------------------------------------------
O(m * n)
We visit each element exactly once.

--------------------------------------------------
Space Complexity:
--------------------------------------------------
O(m * n)
Extra space is used to store the 2D array.

--------------------------------------------------
*/

#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> mat(m,vector<int>(n));
        if(m*n==original.size()){
            int indx=0;
            for(int i =0;i<m;i++){
                for(int j =0;j<n;j++){
                    mat[i][j]=original[indx++];
                }
            }
        } else {
            return {};
        }
       
        return mat;
        
    }
};