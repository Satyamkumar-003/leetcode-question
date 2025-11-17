class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size();
        int x = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                int j = k;
                x = i + 1;
                while (j > 0 && x < n) {
                    cout << nums[x] << " ";
                    if (nums[x] == 1) {
                        return false;
                    } else {
                        x++;
                        j--;
                    }
                }
            }
        }
        return true;
    }
};