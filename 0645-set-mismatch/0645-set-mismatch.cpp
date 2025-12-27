class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int total=(n*(n+1))/2;
        int sum=0;
        int rep=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1])rep=nums[i];
            sum+=nums[i];
        }
        sum+=nums[n-1];
        int rem=total-sum;
        rem+=rep;
        vector<int>result;
        result.push_back(rep);
        result.push_back(rem);
        return result;
    }
};