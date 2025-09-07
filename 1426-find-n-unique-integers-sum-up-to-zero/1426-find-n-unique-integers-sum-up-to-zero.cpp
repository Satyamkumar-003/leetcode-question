class Solution {
public:
    vector<int> sumZero(int n) {
        int sum=0;
        vector<int>ans;
        if(n==2){
            ans.push_back(1);
            ans.push_back(-1);
            return ans;
        }
        
        for(int i=0;i<n-1;i++){
            ans.push_back(i);
            sum+=i;
        }
        ans.push_back(-sum);
        return ans;
    }
};