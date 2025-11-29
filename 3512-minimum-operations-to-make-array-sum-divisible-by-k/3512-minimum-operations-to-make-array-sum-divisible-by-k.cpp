class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int total = 0;

        for (int i = 0; i < n; i++) {
            total += nums[i];
        }
        if (total % k == 0)
            return 0;
        int count = 0;
        while (total >= 0) {
            if (total % k != 0) {
                count++;
                total--;
            } else {
                return count;
            }
        }

        return count;
    }
};