class Solution {
public:
    vector<string> validateCoupons(vector<string>& code,
                                   vector<string>& businessLine,
                                   vector<bool>& isActive) {
        int n = code.size();
        vector<pair<string,string>> valid; 
        // pair: {businessLine, code}
        
        unordered_map<string,int> order = {
            {"electronics", 0},
            {"grocery", 1},
            {"pharmacy", 2},
            {"restaurant", 3}
        };

        for (int i = 0; i < n; i++) {
            // Check code validity
            if (code[i].empty()) continue;
            bool check_code = true;
            for (char a : code[i]) {
                if (!(isalnum(a) || a == '_')) {
                    check_code = false;
                    break;
                }
            }

            // Check businessLine validity & active
            if (check_code && order.count(businessLine[i]) && isActive[i]) {
                valid.push_back({businessLine[i], code[i]});
            }
        }

        // Custom sort
        sort(valid.begin(), valid.end(), [&](auto &a, auto &b) {
            if (order[a.first] != order[b.first])
                return order[a.first] < order[b.first]; // sort by businessLine order
            return a.second < b.second; // lexicographical by code
        });

        // Extract codes only
        vector<string> ans;
        for (auto &p : valid) ans.push_back(p.second);

        return ans;
    }
};
