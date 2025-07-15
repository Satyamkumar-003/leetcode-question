class Solution {
public:
    bool isValid(string word) {
        unordered_map<char,int>mp;
        int n=word.size();
        mp['a']=1;
        mp['e']=1;
        mp['i']=1;
        mp['o']=1;
        mp['u']=1;
       
        bool vowel=false;
        bool consonant=false;
        bool number=false;
        if(word.size()<3){
            return false;
        }

        for(int i=0;i<word.size();i++){
            if(isdigit(word[i])){
                number=true;
                cout<<"dig"<<" ";
                
            }else if(isalpha(word[i])){
                char lower=tolower(word[i]);
                if(mp.count(lower)){
                    vowel=true;
                }else{
                    consonant=true;
                }
            }else{
                return false;
            }
        }
        return vowel && consonant ;
 
    }
};