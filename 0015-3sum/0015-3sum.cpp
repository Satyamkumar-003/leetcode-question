class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            // same element will push the same variable having sum=0 
            // to avoid that we skip the same element iterations
            if(i>0 && nums[i]==nums[i-1])continue;
             
            // defining
            int left=i+1;
            int right=n-1;
            // making the i th element as target and finding other two have sum0
            int target=-nums[i];

            while(left<right){
                int sum=nums[left]+nums[right];

                if(sum==target){
                    ans.push_back({nums[i],nums[left],nums[right]});

                    // removing the duplicates to avoid same triplets

                while(left<right && nums[left]==nums[left+1])left++;
                while(left<right && nums[right]==nums[right-1])right--;


                left++;
                right--;
                }else if(sum<target){
                    // move towards left
                    left++;
                }else{
                    // sum is greater than 0 move towards left
                    right--;
                }
            }
        }
        return ans;
    }
};