class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int n=words.size();
        unordered_map<string,int>m;
        int res=0;
        bool center=false;
        for(int i=0;i<n;i++){
            m[words[i]]++;
        }

        for(auto& [word,count] :m){
            string rev=word;
            reverse(rev.begin(),rev.end());

            if(word==rev){
                res+=(count/2)*4;
                if(count%2==1){
                    center=true;
                }
            }else if(m.find(rev)!=m.end()){
                int pair=min(count,m[rev]);
                res+=pair*4;
                m[rev]=0;
            }
            m[word]=0;
        }

        if(center)res+=2;

        return res;

        
    }
};