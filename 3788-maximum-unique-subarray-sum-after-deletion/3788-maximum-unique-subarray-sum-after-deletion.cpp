class Solution {
public:
    int maxSum(vector<int>& nums) {
       int n=nums.size();
    //    if(n==0)return
       unordered_map<int,int>mp;
       for(int i=0;i<n;i++){
        mp[nums[i]]++;
       }
       int maxsum=0;

       for(auto it:mp){
        if(it.first>0 && it.first!=0){
            maxsum+=it.first;
        }
       }
       if(maxsum==0 && n!=0){
        maxsum=nums[0];
        for(int i=0;i<n;i++){
            maxsum=max(maxsum,nums[i]);
        }
       }

       return maxsum;
    }
};