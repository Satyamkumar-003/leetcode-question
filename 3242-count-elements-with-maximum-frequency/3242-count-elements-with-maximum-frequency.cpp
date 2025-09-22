class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int a:nums){
            mp[a]++;
        }
        int maxfreq=0;
        int maxval=0;
        for(auto it:mp){
            maxval=max(maxval,it.second);
        }
        for(auto it:mp){
            if(maxval==it.second){
                maxfreq+=maxval;
            }
        }
        return maxfreq;
    }
};