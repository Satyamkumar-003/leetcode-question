class Solution {
public:
    int countHillValley(vector<int>& nums) {
        // check the the neighbour which is not equal 
        // if some index come in some valley of hill dont count in next
        int n=nums.size();
        int hill=0;
        int vally=0;
        for(int i=1;i<n;i++){

           if(nums[i]==nums[i-1])continue;

           int prev=i-1;
           while(prev>=0 && nums[prev]==nums[i]){
            prev--;
           }

           int next=i+1;
           while(next<n && nums[next]==nums[i]){
            next++;
           }

           if(prev>=0 && next<n){
            if(nums[prev]<nums[i] && nums[next]<nums[i]){
                hill++;
            }else if(nums[prev]>nums[i] && nums[next]>nums[i]){
                vally++;
            }
           }

        }
        return hill+vally;
    }
};