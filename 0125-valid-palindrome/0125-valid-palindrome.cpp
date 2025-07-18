class Solution {
public: 
    bool checkpalindrome(string ans){
        int i=0;
        int n=ans.size()-1;
        while(i<=n){
            if(ans[i]!=ans[n]){
                return false;
            }
            i++;
            n--;
        }
        return true;
    }


    bool isPalindrome(string s) {
        int n=s.size();
        string ans="";
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                ans.push_back(s[i]);
            }else if(isalpha(s[i])){
                char letter=tolower(s[i]);
                ans.push_back(letter);
            }
        }
        bool result=checkpalindrome(ans);

        return result;
    }
};