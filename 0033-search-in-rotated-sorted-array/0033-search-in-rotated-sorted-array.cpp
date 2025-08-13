class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();

        int left=0;
        int right=n-1;
        
        while(left<=right){
            
            int mid=left+(right-left)/2;
            if(target==nums[mid])return mid;
            // chech weather the larget element are right to mid if(yes)=>else
            if(nums[left]<=nums[mid]){
                // now check condition for target respect to left
                if(target>=nums[left] && target<nums[mid]){
                    right=mid-1;
                }else{
                    left=mid+1;
                }
            }else{
                // check condition for target respect to right
               if(target>nums[mid] && target<=nums[right]){
                    left=mid+1;
                }else{
                    right=mid-1;
                }        
                
            }
        }
        return -1;

    }
};