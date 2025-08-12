class Solution {
public:
    long long nCr(int n, int r) {
        long long res = 1;
        for (int i = 1; i <= r; i++) {
            res = res * (n - i + 1) / i;
        }
        return res;
    }

    int climbStairs(int n) {
        long long ans = 0;
        for (int k = 0; k <= n / 2; k++) {
            int one = n - 2 * k;
            int total = one + k;
            ans += nCr(total, k);
        }
        return (int)ans;
    }
};
