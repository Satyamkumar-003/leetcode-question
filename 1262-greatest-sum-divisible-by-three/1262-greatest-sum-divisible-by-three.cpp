class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
         int sum = 0;
        
        // store smallest remainder 1 numbers and remainder 2 numbers
        vector<int> r1, r2;

        for (int x : nums) {
            sum += x;
            if (x % 3 == 1) r1.push_back(x);
            else if (x % 3 == 2) r2.push_back(x);
        }

        sort(r1.begin(), r1.end());
        sort(r2.begin(), r2.end());

        if (sum % 3 == 0) 
            return sum;

        int ans = 0;

        if (sum % 3 == 1) {
            int remove1 = INT_MAX, remove2 = INT_MAX;

            if (!r1.empty()) remove1 = r1[0];
            if (r2.size() >= 2) remove2 = r2[0] + r2[1];

            ans = sum - min(remove1, remove2);
        }
        else { // sum % 3 == 2
            int remove1 = INT_MAX, remove2 = INT_MAX;

            if (!r2.empty()) remove1 = r2[0];
            if (r1.size() >= 2) remove2 = r1[0] + r1[1];

            ans = sum - min(remove1, remove2);
        }
       

        return ans < 0 ? 0 : ans;
    }
};