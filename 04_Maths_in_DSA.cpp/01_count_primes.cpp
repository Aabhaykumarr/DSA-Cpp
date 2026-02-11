#include <bits/stdc++.h>
using namespace std;

/*
    LeetCode 204: Count Primes

    Problem Description:
    --------------------
    Given an integer n, return the number of prime numbers
    that are strictly less than n.

    A prime number is a natural number greater than 1
    that has no positive divisors other than 1 and itself.

    Approach (Sieve of Eratosthenes - Basic Version):
    -------------------------------------------------
    - Create a boolean array 'primes' of size n+1 and mark all as true.
    - Mark 0 and 1 as non-prime.
    - Traverse numbers from 2 to n-1.
    - If a number is prime, increment the count.
    - Mark all multiples of that number as non-prime.

    Note:
    -----
    This is the basic sieve approach (not optimized).
    Multiples start from 2*i.

    Time Complexity:
    ---------------
    O(n log log n) (average case for sieve)
    In this implementation, it may behave closer to O(n log n)
    due to starting multiples from 2*i.

    Space Complexity:
    ----------------
    O(n)
    Extra boolean array of size n+1 is used.
*/

class Solution {
public:
    int countPrimes(int n) {
        vector<bool> primes(n + 1, true);

        // 0 and 1 are not prime
        primes[0] = primes[1] = false;

        int count = 0;

        // Check numbers from 2 to n-1
        for (int i = 2; i < n; i++) {
            if (primes[i]) {
                count++;

                // Mark multiples of i as non-prime
                for (int j = 2 * i; j < n; j = j + i) {
                    primes[j] = false;
                }
            }
        }

        return count;
    }
};