class Solution {
public:
    static bool comparator(const pair<string,int>&a,const pair<string,int>&b){
        if (a.second == b.second) 
            return a.first < b.first;  // sort lexicographically if frequency is same
        return a.second > b.second;
    }

    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        vector<pair<string,int>>vec;
        vector<string>ans;
        for(auto it: words){
            string key=it;
            mp[key]++;  
        }
        for(auto it: mp){
            vec.push_back({it.first,it.second});
        }
        sort(vec.begin(),vec.end(),comparator);
        int i=0;
        while(k){
            ans.push_back(vec[i].first);
            i++;
            k--;
        }

        return ans;
    }
};