class Solution {
public:
    string getHint(string secret, string guess) {
        int n=secret.size();
        int bulls=0;
        for(int i=0;i<n;i++){
            if(secret[i]==guess[i]){
                bulls++;
            }
        }
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(secret[i]!=guess[i]){
                mp[secret[i]]++;
            }
        }
        // calculate cows
        int cows=0;
        // cout<<mp[secret[0]];
        for(int i=0;i<n;i++){
            if(guess[i]!=secret[i]){
                if(mp.find(guess[i])!=mp.end()){
                    if(mp[guess[i]]>0){
                        cows++;
                        mp[guess[i]]--;
                    }
                }
            }
        }
        string res = to_string(bulls) + "A" + to_string(cows) + "B";

        return res;
    }
};