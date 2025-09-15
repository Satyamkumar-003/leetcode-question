class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int n = text.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            while (text[i] == ' ')
                i++;
            int j = i;
            while (j < n && text[j] != ' ')
                j++;
            string str = text.substr(i, j - i);
            unordered_map<char, int> mp;

            for (char c : str) {
                mp[c]++;
            }
            bool occur = false;
            for (int k = 0; k < brokenLetters.size(); k++) {
                if (mp.find(brokenLetters[k]) != mp.end()) {
                    occur = true;
                }
            }

            if (!occur) {
                count++;
            }
            i = j;
        }

        return count;
    }
};