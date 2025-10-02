class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int n=words.size();
        vector<string>ans;
        for(int i=0;i<n;i++){
            string st=words[i];
            ans.push_back(st);
            sort(st.begin(),st.end());
            for(i;i<n-1;i++){
                string s=words[i+1];
                sort(s.begin(),s.end());
                if(st!=s){
                    break;
                }
            }
        }
        return ans;
        // unordered_map<string,int>m;
        // vector<string>ans;
        // for(int i=0;i<n;i++){
        //     string st=words[i];
        //     sort(st.begin(),st.end());

        //     if(m.find(st)!=m.end()){
        //         m[st]++;
        //     }else{
        //         ans.push_back(words[i]);
        //     }
        // }
        // for(auto it:m){
        //     cout<<it.first<<endl;
        // }

        // return ans;



        // unordered_map<string,int>m;
        // for(int i=0;i<n;i++){
        //     string st=words[i];
        //     sort(st.begin(),st.end());
        //     m[st]++;
        // }
        // vector<string>ans;
        // for(auto it:m){
        //     ans.push_back(it.first);
        // }
        // sort(ans.begin(),ans.end());
        // return ans;
    }
};