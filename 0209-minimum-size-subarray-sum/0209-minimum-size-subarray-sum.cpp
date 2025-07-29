class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int l=0,r=0;
        int sum=0;
        int minlen=INT_MAX;
        while(r<n){
            sum+=nums[r]; 
                       
            if(sum>target){               
                while(sum>target){
                    minlen=min(minlen,r-l+1);
                    sum-=nums[l];
                    l++;
                    if(sum==target){
                        int len=r-l+1;
                        minlen=min(len,minlen);
                    }

                }
            }

            if(sum==target){
                int len=r-l+1;
                minlen=min(minlen,len);
            }
            r++;

        }
        if(minlen==INT_MAX){
            return 0;
        }
        return minlen;
    }
};