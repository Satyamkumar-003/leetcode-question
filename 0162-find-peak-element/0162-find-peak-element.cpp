class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        // int i=0;
        while(l<r){
            int mid=l+(r-l)/2;
            // cout<<l<<" "<<r<<endl;
            // cout<<mid<<endl;
             if(nums[mid]>nums[mid+1]){
                r=mid;
            }else{
                l=mid+1;
            }

        }
        return l;
    }
};