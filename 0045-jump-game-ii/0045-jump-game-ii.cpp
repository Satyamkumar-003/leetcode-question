class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int farthest=0;
        int currind=0;

        for(int i=0;i<n-1;i++){
            farthest=max(nums[i]+i,farthest);
            if(i==currind){
                count++;
                currind=farthest;
            }
        }
        return count;
    }
};