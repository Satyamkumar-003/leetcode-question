class Solution {
public:
    // Convert word to lowercase
    string toLowerCase(const string &s) {
        string res;
        for (char ch : s) res.push_back(tolower(ch));
        return res;
    }

    // Replace vowels with '*'
    string devowel(const string &s) {
        string res;
        for (char ch : s) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                res.push_back('*');
            else
                res.push_back(ch);
        }
        return res;
    }

    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        unordered_set<string> exact;             // for exact match
        unordered_map<string, string> lower;     // lowercase match
        unordered_map<string, string> vowel;     // vowel-masked match

        // Preprocess wordlist
        for (string &w : wordlist) {
            exact.insert(w);

            string lw = toLowerCase(w);
            if (!lower.count(lw)) lower[lw] = w;   // keep first occurrence

            string vw = devowel(w);
            if (!vowel.count(vw)) vowel[vw] = w;   // keep first occurrence
        }

        vector<string> ans;
        for (string &q : queries) {
            if (exact.count(q)) {
                ans.push_back(q);  // exact match
            } else {
                string lq = toLowerCase(q);
                if (lower.count(lq)) {
                    ans.push_back(lower[lq]);  // case-insensitive match
                } else {
                    string vq = devowel(q);
                    if (vowel.count(vq)) {
                        ans.push_back(vowel[vq]);  // vowel-error match
                    } else {
                        ans.push_back("");  // no match
                    }
                }
            }
        }

        return ans;
    }
};
