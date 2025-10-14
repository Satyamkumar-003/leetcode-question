class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();

        // Function to check if a subarray of length k starting at i is strictly increasing
        auto isIncreasing = [&](int i) {
            for (int j = i; j < i + k - 1; j++) {
                if (nums[j] >= nums[j + 1]) return false;
            }
            return true;
        };

        // iterate possible starting indices of first subarray
        for (int i = 0; i + 2 * k <= n; i++) {
            if (isIncreasing(i) && isIncreasing(i + k)) {
                return true;
            }
        }

        return false;
    }
};