class Solution {
public:
    int maximum69Number (int num) {
        string st=to_string(num);
        for(int i=0;i<st.size();i++){
            if(st[i]=='6'){
                st[i]='9';
                break;
            }
        }
        int ans=0;
        for(int i=0;i<st.size();i++){
            ans=ans*10+st[i]-'0';
        }
        return ans;
    }
};