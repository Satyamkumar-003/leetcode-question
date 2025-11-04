class Solution {
public:

    static bool comp(const pair<int,int>&a, const pair<int,int>&b){
         if(a.second==b.second){
            return a.first>b.first;
        }return a.second>b.second;
    }


    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n=nums.size();
        vector<int>ans;
        // take care of distinct
        // subarray of size k
        // sum of most x frequent elements.

        for(int i=0;i<n;i++){
            //count the freqeuncy.
            unordered_map<int,int>mp;
            int q=i;
            int r=i+k;
            if(r>n)break;
            while(q<r){
                mp[nums[q]]++;
                q++;
            }

            vector<pair<int,int>>temp;
            for(auto it: mp){
                temp.push_back({it.first,it.second});
            }
            sort(temp.begin(),temp.end(),comp);
            // for(int i=0;i<temp.size();i++){
            //     cout<<temp[i].first<<" "<<temp[i].second<<endl;
            // }
            // now calculate the xsum
            int sum=0;
            int e=0;
            while(e<x && e<temp.size()){
                sum+=temp[e].first*temp[e].second;
                e++;
            }
            ans.push_back(sum);

            
        }
        return ans;
    }
};