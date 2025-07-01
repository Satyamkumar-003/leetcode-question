// bool isPalindrome(const std::string& str) {
//     int left = 0;
//     int right = str.length() - 1;

//     while (left < right) {
//         if (str[left] != str[right]) {
//             return false;
//         }
//         left++;
//         right--;
//     }
//     return true;
// }
class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        string res;
        int maxlen=INT_MIN;
        for(int i=0;i<n;i++){
            int l=i;
            int r=i;
            if(s[l]==s[r]){
                while( (l>=0 && r<n) && (s[l]==s[r])){
                    int length=r-l+1;
                    if(length>maxlen){
                        maxlen=length;
                        res=s.substr(l,length);
                    }
                    l--;
                    r++;
                }
            }
        }

        // for even
        for(int i=0;i<n;i++){
            if(s[i]==s[i+1]){
                int el=i;
                int er=i+1;
                if(s[el]==s[er]){
                    while((el>=0 && er<n) && (s[el]==s[er])){
                        int length=er-el+1;
                    if(length>maxlen){
                        maxlen=length;
                        res=s.substr(el,length);
                    }
                    el--;
                    er++;
                    }
                }
            }
        }

        return res;




        // string str="";
        // string result="";
        // for(int i=0;i<n;i++){
        //     str="";
            
        //     for(int j=i;j<n;j++){
        //         str.push_back(s[j]);
                
                
        //         if(isPalindrome(str)==true){
        //            int a=str.size();
        //            if(a>result.size()){
        //             result=str;
                    
        //            }
        //         }
        //     }
        // }
        // return result;
    }
};