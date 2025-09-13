class Solution {
public:
    bool isvowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int mvf = 0;
    int mcf = 0;
    int maxFreqSum(string s) {
        int n = s.size();
        unordered_map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }
        for (auto it : mp) {
            if (isvowel(it.first)) {
                mvf = max(mvf, it.second);
            } else {
                mcf = max(mcf, it.second);
            }
        }

        return mvf + mcf;
    }
};