class Solution {
public:
bool canEatAll(vector<int>& piles, int h, int k) {
        long long totalHours = 0;
        for(int bananas : piles) {
            totalHours += (bananas + k - 1) / k;  // Ceiling division
        }
        return totalHours <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int result = right;

        while(left <= right) {
            int mid = left + (right - left) / 2;

            if(canEatAll(piles, h, mid)) {
                result = mid;           // Valid speed, try to minimize
                right = mid - 1;
            } else {
                left = mid + 1;         // Too slow, increase speed
            }
        }

        return result;
    }
};