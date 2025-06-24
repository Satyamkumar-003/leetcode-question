class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n=nums.size();
        int i=0,j=0;
        // int m=0;
        vector<int>res;
        unordered_map<int,int>m;
        vector<int>occ;
        for(int i=0;i<n;i++){
            if(nums[i]==key){
                occ.push_back(i);
            }
        }
        int q=occ.size();

        for(int i=0;i<q;i++){
            for(int j=0;j<n;j++){
                if(abs(j-occ[i])<=k){
                    if(m.find(j)!=m.end()){

                    }else{
                        m[j]++;
                        res.push_back(j);
                    }
                }
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};