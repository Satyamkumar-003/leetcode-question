class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        // int l=0,r=0;
        int count=0;
        for(int i=0;i<n;i++){
            string str;
            for(int j=i;j<n;j++){
                str.push_back(s[j]);
                string t=str;
                reverse(t.begin(),t.end());
                if(str==t)count++;
            }
        }
        return count;
    }
};