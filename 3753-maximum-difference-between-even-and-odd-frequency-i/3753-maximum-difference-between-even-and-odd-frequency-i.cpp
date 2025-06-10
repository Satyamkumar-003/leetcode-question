class Solution {
public:
    int maxDifference(string s) {
        int n=s.size();
        unordered_map<char,int>m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        
        int mine = INT_MAX, mino = INT_MAX;
        int maxe = INT_MIN, maxo = INT_MIN;

        for(auto it:m){
            int k=it.second;
            if(k%2!=0){
                maxo = max(maxo, k);
                
            }else {
                
                mine = min(mine, k);
            }
            
        }
            
            int res=maxo-mine;

            return res;
    }
};