class Solution {
public:
    string removeSubstring(string s, int k) {
        int n = s.size();
        stack<pair<char, int>> st;

        for (char c : s) {
            if (!st.empty() && st.top().first == c) {
                st.top().second++;
            } else {
                st.push({c, 1});
            }
            

            if (c == ')' && st.size() >= 2) {
                auto right = st.top();
                st.pop();
                auto left = st.top();
                st.pop();

                if (left.first == '(' && right.first == ')' &&
                    left.second >= k && right.second >= k) {
                    left.second -= k;
                    right.second -= k;
                }
                if (left.second > 0)
                    st.push(left);
                if (right.second > 0)
                    st.push(right);
            }
        }

        string result = "";
        vector<pair<char, int>> buffer;
        while (!st.empty()) {
            buffer.push_back(st.top());
            st.pop();
        }

        reverse(buffer.begin(), buffer.end());
        for (auto& p : buffer) {
            result.append(p.second, p.first);
        }

        return result;
    }
};