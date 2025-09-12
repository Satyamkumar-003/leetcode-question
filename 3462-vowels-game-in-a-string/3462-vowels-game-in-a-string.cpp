class Solution {
public:
    bool isVowel(char c) {
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }

    bool doesAliceWin(string s) {
        while(!s.empty()){
            int n = s.size();
            int count = 0;

            // count vowels
            for(char c : s){
                if(isVowel(c)) count++;
            }

            if(count==0) return false; // no vowels → Alice loses
            if(count%2!=0) return true; // odd vowels → Alice wins

            // find last vowel
            int k = n-1;
            while(k>=0 && !isVowel(s[k])) k--;

            if(k<0) return false; // no vowels found (safety)
            
            // cut suffix starting at last vowel
            s = s.substr(k);
        }

        return false;
    }
};
