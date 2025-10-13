class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>ans;
        vector<int>odd;
        vector<int>even;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i%2==0){
                even.push_back(nums[i]);
            }else{
                odd.push_back(nums[i]);
            }
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(),greater<int>());
        for(int i=0;i<n/2+1;i++){
            if(i<even.size())ans.push_back(even[i]);
            if(i<odd.size())ans.push_back(odd[i]);
        }


        return ans;
    }
};