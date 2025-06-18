class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=n;
        vector<int>res;
        while(i>0){
            res.clear();
            int x=i-3;
            cout<<i<<" ";
            if(nums[i-1]-nums[x]<=k){
                res.push_back(nums[i-1]);
                res.push_back(nums[i-2]);
                res.push_back(nums[i-3]);
            }else{
                ans.clear();
                return ans;
            }
            ans.push_back(res);
            i=x;

        }

        return ans;

    }
};