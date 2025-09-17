class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int n=nums.size();
        int total=0;
        for(int i=0;i<n;i++){
            int j=i-k;
            int l=i+k;
            if(j>=0 && l<n){
                if(nums[i]>nums[j] && nums[i]>nums[l]){
                    total+=nums[i];
                }
            }else if(j<0 && l<n){
                if(nums[i]>nums[l]){
                    total+=nums[i];
                }
                
            }else if(j>=0 && l>=n){
                if(nums[i]>nums[j])total+=nums[i];
            }
            cout<<total<<" ";
        }
        return total;
    }
};