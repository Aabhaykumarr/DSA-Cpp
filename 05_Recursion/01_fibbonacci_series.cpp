/*
Problem: Fibonacci Number
Question No: 509
Platform: LeetCode
Difficulty: Easy

Approach:
Simple recursion using definition:
F(n) = F(n-1) + F(n-2)
Base cases:
F(0) = 0
F(1) = 1

Time Complexity: O(2^n)
Space Complexity: O(n)  // recursion stack
*/

class Solution {
public:
    int fib(int n) {

        if(n == 0){
            return 0;
        }

        if(n == 1){
            return 1;
        }

        return fib(n - 1) + fib(n - 2);
    }
};