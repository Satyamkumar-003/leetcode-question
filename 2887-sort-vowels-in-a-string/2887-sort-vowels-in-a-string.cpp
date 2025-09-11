class Solution {
public:
    string sortVowels(string s) {
        vector<int>vec;
        vector<int>index;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U'){
                vec.push_back(s[i]);
                index.push_back(i);
            }
        }
        sort(vec.begin(),vec.end());
        for(int i=0;i<vec.size();i++){
            s[index[i]]=vec[i];
        }
        return s;
    }
};