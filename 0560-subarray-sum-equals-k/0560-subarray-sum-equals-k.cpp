class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size(); 
        int ans=0;
        int prefixsum=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int num:nums ){
            prefixsum+=num;

            if(mp.find(prefixsum-k)!=mp.end()){
                ans+=mp[prefixsum-k];
            }

            mp[prefixsum]++;
        }
        return ans;

    }
    };
     