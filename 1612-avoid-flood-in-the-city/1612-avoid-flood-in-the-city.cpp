#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n = rains.size();
        vector<int> ans(n, 1);  // Default all dry days to 1
        unordered_map<int, int> full; // lake -> last rainy day
        set<int> dryDays;             // indices of days we can dry lakes

        for (int i = 0; i < n; i++) {
            if (rains[i] > 0) {
                int lake = rains[i];
                ans[i] = -1; // raining day, can't dry anything

                if (full.count(lake)) {
                    // find a dry day after last rain
                    auto it = dryDays.lower_bound(full[lake]);
                    if (it == dryDays.end()) {
                        // no available dry day → flood
                        return {};
                    }
                    ans[*it] = lake;  // dry this lake on that day
                    dryDays.erase(it);
                }

                full[lake] = i; // mark this lake full today
            } else {
                dryDays.insert(i);
                // we'll decide later which lake to dry
            }
        }

        return ans;
    }
};
