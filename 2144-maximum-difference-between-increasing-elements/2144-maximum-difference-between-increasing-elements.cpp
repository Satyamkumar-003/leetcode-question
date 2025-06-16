class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int minele=nums[0];
        int maxdiff=-1;
        
        for(int i=1;i<n;i++){
            if(nums[i]>minele){
                maxdiff=max(maxdiff,nums[i]-minele);
            }else{
                 minele=min(minele,nums[i]);
            }
        }
        return maxdiff;
    }
};