class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int mtime=nums.size()/3;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<int>res;
        for(auto it:m){
            if(it.second>mtime){
                res.push_back(it.first);
            }
        }
        return res;

    }
};