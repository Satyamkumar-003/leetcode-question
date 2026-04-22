class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        int n=queries.size();
        int m=dictionary.size();
        
        vector<string>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                string first=queries[i];
                string sec=dictionary[j];

                int x=0,z=first.size();
                int count=0;
                bool breakk=false;
                while(x<z){
                    if(first[x]!=sec[x]){
                        count++;
                    }
                    if(count<=2 && x==z-1){
                        ans.push_back(queries[i]);
                        breakk=true;
                        break;
                    }
                    x++;
                }
                if(breakk)break;

            }
        }
        return ans;
    }
};