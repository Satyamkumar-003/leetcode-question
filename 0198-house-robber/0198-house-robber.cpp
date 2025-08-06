class Solution {
public:
    int rob(vector<int>& nums) {
       int n=nums.size();
       int res=0;
       int ano=0;
       for(int num:nums){
        int temp=res;
        res=max(ano+num,res);
        ano=temp;
        
       }
       return res;
    }
};