class Solution {
public:
    int maximumSwap(int num) {
        int number = num;
        vector<int> ans;

        // Convert number to vector of digits
        while (number > 0) {
            int lastdig = number % 10;
            ans.push_back(lastdig);
            number /= 10;
        }
        reverse(ans.begin(), ans.end());

        int n = ans.size();

        // Iterate over each position
        for (int k = 0; k < n; k++) {
            int maxno = ans[k];
            int ind = k;

            // find the max digit on the right side
            for (int i = n - 1; i > k; i--) {
                if (ans[i] > maxno) {
                    maxno = ans[i];
                    ind = i;
                }
            }

            // if a bigger digit is found later, swap and stop
            if (ind != k) {
                swap(ans[k], ans[ind]);
                break;
            }
        }

        // Convert vector back to number
        int nnum = 0;
        for (int i = 0; i < n; i++) {
            nnum = nnum * 10 + ans[i];
        }

        return nnum;
    }
};
