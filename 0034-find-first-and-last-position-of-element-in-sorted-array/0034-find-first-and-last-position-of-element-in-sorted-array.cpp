class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans;
        ans.push_back(-1);
        ans.push_back(-1);
        int i=0;
        while(i<n){
            if(nums[i]==target){
                ans[0]=i;
                break;
            }
            i++;
        }
        int k=n-1;
        while(k>=0){
            if(nums[k]==target){
                ans[1]=k;
                break;
            }
            k--;
        }
        return ans;
    }
};