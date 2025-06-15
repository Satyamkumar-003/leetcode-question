class Solution {
public:
    int maxDiff(int num) {
        string s=to_string(num);
        string sMax = s;
        for (char c : s) {
            if (c != '9') {
                char toReplace = c;
                for (char &ch : sMax) {
                    if (ch == toReplace) ch = '9';
                }
                break;
            }
        }

        int a=stoi(sMax);

        string sMin=s;
        if(s[0]!='1'){
            char toreplace=s[0];
            for(auto &ch :sMin){
                if(ch==toreplace)ch='1';
            }
        }else{
            for(int i=1;i<sMin.size();i++){
                if(s[i]!='1' && s[i]!='0'){
                    char toreplace=s[i];
                    for(auto &ch:sMin){
                        if(ch==toreplace)ch='0';
                    }
                    break;
                }
            }
        }
        int b=stoi(sMin);

        
        return a-b;
    }
};