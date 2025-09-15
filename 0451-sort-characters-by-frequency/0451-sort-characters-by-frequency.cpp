class Solution {
public:
    static bool compartor(const pair<char,int>&a,const pair<char,int>&b){
        return a.second>b.second;
    }

    string frequencySort(string s) {
        int n=s.size();
        unordered_map<char,int>mp;

        for(char c:s){
            mp[c]++;
        }
        vector<pair<char,int>>vec;
        for(auto it:mp){
            vec.push_back({it.first,it.second});
        }
        sort(vec.begin(),vec.end(),compartor);
        string ans="";
        for(int i=0;i<vec.size();i++){
            int k=vec[i].second;
            while(k>0){
                ans.push_back(vec[i].first);
                k--;
            }
        }
        return ans;

        // int n=s.size();
        // string ans="";
        // map<char,int>m;
        // map<int,vector<char>>m2;

        // for(int i=0;i<n;i++){
        //     m[s[i]]++;
        // }
        // for(auto i:m){
        //     cout<<-i.second<<" "<<i.first<<endl;
        //     m2[-i.second].push_back(i.first);
        // }
        // for(auto i:m2){
        //     for(auto i1:i.second){
        //         string temp="";
        //         for(int j=0;j<-i.first;j++){
        //             temp+=i1;
        //         }
        //         ans+=temp;
        //     }
        // }
        // return ans;
    }
};