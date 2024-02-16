class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long long p;
        if (n < 0) {
        long long temp = n;
        p = -temp;
        x = 1 / x;
        } else {
        p = n;
        }
        while (p) {
        if (p & 1)
        ans *= x;
        x *= x;
        p >>= 1;
        }
        return ans;
    }
};