class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=0;
        int count=0;
        int maxlen=1;
        while(r<n){
            if(nums[r]==0)count++;

            while(count>1){
                if(nums[l]==0)count--;
                l++;
            }

            int length=r-l+1;
            maxlen=max(maxlen,length);
            r++;
        }
        return maxlen-1;
    }
};