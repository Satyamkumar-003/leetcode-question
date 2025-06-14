class Solution {
public:
    bool havepair(vector<int>nums,int p,int maxdiff){
        int count=0;
        int n=nums.size();
        int i=0;
        while(i<n-1){
            if(nums[i+1]-nums[i]<=maxdiff){
                count++;
                i+=2;
            }else{
                i++;
            }
        }
        return count>=p;
    }



    int minimizeMax(vector<int>& nums, int p) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int low=0,high=nums.back()-nums.front();
        int result=high;
        while(low<=high){
            int mid=(low+high)/2;
            if(havepair(nums,p,mid)){
                result=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return result;
    }
};