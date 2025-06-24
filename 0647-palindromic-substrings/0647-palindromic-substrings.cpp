class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++){
            // assume abaabc
            int l=i-1;
            int r=i+1;
            if((l>=0 && r<n) && (s[l]==s[r])){
            while((l>=0 && r<n) && (s[l]==s[r]) ){
                if(l>=0 && r<n){
                    count++;
                }
                l--;
                r++;
                
            }
            count++;
            } else{
                count++;
            }
        }

        for(int i=0;i<n;i++){
            if(s[i]==s[i+1]){
                cout<<s[i]<<" "<<s[i+1];
                int el=i-1;
                int er=i+2;
                if(el>=0 && er<n){
                    while((el>=0 && er<n) && s[el]==s[er]){
                        count++;
                        el--;
                        er++;
                    }
                }
                count++;

            }
        }
        return count;

        









        // int n=s.size();
        // // int l=0,r=0;
        // int count=0;
        // for(int i=0;i<n;i++){
        //     string str;
        //     for(int j=i;j<n;j++){
        //         str.push_back(s[j]);
        //         string t=str;
        //         reverse(t.begin(),t.end());
        //         if(str==t)count++;
        //     }
        // }
        // return count;
    }
};