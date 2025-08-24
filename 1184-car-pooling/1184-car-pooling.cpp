class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<pair<int,int>>events;

        for(auto &it:trips){
            events.push_back({it[1],it[0]});
            events.push_back({it[2],-it[0]});
            
            }
            sort(events.begin(),events.end());

        int curcap=0;
        for(auto &it:events){
            curcap+=it.second;
            if(curcap>capacity)return false;
        }    


            return true;
    }
};