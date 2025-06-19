class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int count=0;
        int i=0;
        int j=1;
        while(j<n){
            if(nums[j]-nums[i]>k){
                count++;
                i=j;
            }
            j++;
        }
        return count+1;
    }
};