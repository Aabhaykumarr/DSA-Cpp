/*
    Problem: LeetCode 50 - Pow(x, n)
    Approach: Binary Exponentiation (Fast Power)
    Time Complexity: O(log n)
    Space Complexity: O(1)
*/

class Solution {
public:
    double myPow(double x, int n) {
        
        long long N = n;  // Convert to long long to prevent overflow
        
        // Handle negative exponent
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        
        double result = 1.0;
        
        // Binary exponentiation
        while (N > 0) {
            if (N % 2 == 1) {   // If current bit is 1 (odd)
                result *= x;
            }
            
            x *= x;            // Square the base
            N /= 2;            // Divide exponent by 2
        }
        
        return result;
    }
};