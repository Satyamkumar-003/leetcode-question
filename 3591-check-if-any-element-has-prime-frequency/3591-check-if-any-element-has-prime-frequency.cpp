class Solution {
public:
    bool checkprime(int x){
        if(x<=1)return false;

        for(int i=2;i*i<=x;i++){
            if(x%i==0){
                return false;
            }
        }
        return true;
    }

    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int>mp;
        
        for(int it:nums){
            mp[it]++;
        }
        
        for(auto it:mp){
            if(checkprime(it.second)){
                return true;
            }
        }
        return false;
    }
};