class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;

        for (int num : nums) {
            string str = to_string(num);
            int k = str.size();

            if (k == 1) {
                sum += num;
                continue;
            }

            int maxi = 0;
            for (char c : str) {
                maxi = max(maxi, c - '0');
            }

            int encrypted = 0;
            for (int i = 0; i < k; i++) {
                encrypted = encrypted * 10 + maxi;
            }

            sum += encrypted;
        }

        return sum;
    }
};