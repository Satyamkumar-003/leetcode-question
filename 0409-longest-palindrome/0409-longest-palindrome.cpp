class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        for (char c : s) mp[c]++;

        int length = 0;
        bool hasOdd = false;

        for (auto &it : mp) {
            if (it.second % 2 == 0) {
                length += it.second;
            } else {
                length += it.second - 1;   // take even part
                hasOdd = true;             // one odd can be middle
            }
        }

        if (hasOdd) length++;   // add one center char

        return length;
    }
};
