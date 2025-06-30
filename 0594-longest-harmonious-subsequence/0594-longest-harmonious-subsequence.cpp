class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        unordered_map<int,int>m;
        int n=nums.size();
        int maxc=0;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
            
        }
        for(int i=1;i<n;i++){
            int diff=abs(nums[i]-nums[i-1]);
            if(diff==1){
                count=m[nums[i]]+m[nums[i-1]];
                cout<<count<<endl;
                maxc=max(maxc,count);
                cout<<maxc<<endl;
            }
        }
        return maxc;
    }
};