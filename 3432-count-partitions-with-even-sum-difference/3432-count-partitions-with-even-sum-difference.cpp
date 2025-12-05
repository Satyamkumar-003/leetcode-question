class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int curr=0;
        int count=0;
        for(int i=0;i<n-1;i++){
            curr+=nums[i];
            sum-=nums[i];
            
            int k=abs(sum-curr);
            if(k%2==0){
                count++;
            }
        }
        return count;
    }
};