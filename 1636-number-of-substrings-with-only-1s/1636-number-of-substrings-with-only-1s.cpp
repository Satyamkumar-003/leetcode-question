class Solution {
public:
    int numSub(string s) {
        int n = s.size();
        long long total = 0;
        long long l = 0, r = 0;
        int MOD = 1e9 + 7;
        // stirng temp="";
        while (r < n) {
            if (s[r] == '0') {
                r++;
                l = r;
            } else {
                while (r<n && s[r] == '1') {
                    r++;
                }
                
                long long x = r - l;
                long long block_sum = x * (x + 1) / 2;
                total = (total + block_sum) % MOD;
                cout << r << "  " << total << endl;
            }
        }
        return total;

        // for(int i=0;i<n;i++){
        //     string temp="";
        //     for(int j=i;j<n;j++){
        //         char ch=s[j];
        //         temp.push_back(ch);
        //         if(temp.find('0')!= string::npos)break;
        //         total++;

        //     }
        // }
        return total;
    }
};