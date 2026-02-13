/*
    Problem: LeetCode 50 - Pow(x, n)
    Approach: Binary Exponentiation (Fast Power)
    Time Complexity: O(log n)
    Space Complexity: O(1)
*/

class Solution {
public:
    double myPow(double x, int n) {
        double res=1;
        long long N=n;
        if(N<0){
            x=1/x;
            N=-N;
        }
        while(N>0){
            if(N&1){
                res=res*(x);
            }
            x=x*x;
            N=N>>1;
        }
    return res;
    }
};