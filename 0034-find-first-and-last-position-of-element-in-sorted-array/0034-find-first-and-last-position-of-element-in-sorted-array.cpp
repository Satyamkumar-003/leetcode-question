class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans;
        ans.push_back(-1);
        ans.push_back(-1);

        int l=0;
        int h=n-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(target==nums[mid]){
                int start=mid;
                while(start>0 && nums[start-1]==target){
                    start--;
                }
                ans[0]=start;
                int end=mid;
                while(end<n-1 && nums[end+1]==target){
                    end++;
                }
                ans[1]=end;
                break;
            }else
            if(target>nums[mid]){
                l=mid+1;
            }else if(target<nums[mid]){
                h=mid-1;
            }
        }
       
        return ans;
    }
};