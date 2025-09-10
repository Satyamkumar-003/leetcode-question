class Solution {
public:
    int countHomogenous(string s) {
        const int MOD = 1e9 + 7;
        long long ans = 0;
        int n = s.size();
        
        long long count = 1; // at least 1 char in the run
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i-1]) {
                count++; 
            } else {
                ans = (ans + count * (count + 1) / 2) % MOD;
                count = 1;
            }
        }
        // Add last run
        ans = (ans + count * (count + 1) / 2) % MOD;
        
        return ans;
    }
};
