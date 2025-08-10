class Solution {
public:
    string countAndSay(int n) {
        string s = "";
        s.push_back('1');
        for (int i = 1; i < n; i++) {
            string nst = "";
            for (int j = 0; j < s.size(); j++) {
                int count = 1;
                while (j + 1 < s.size() && s[j] == s[j + 1]) {
                    count++;
                    j++;
                }
                
                    nst += to_string(count);
                    nst.push_back(s[j]);
               
            }
            s = nst;
        }
        return s;
    }
};