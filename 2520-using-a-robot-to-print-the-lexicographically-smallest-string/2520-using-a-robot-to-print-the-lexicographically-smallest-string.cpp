class Solution {
public:
    string robotWithString(string s) {
       int n=s.size();
       vector<int>freq(26,0);

       //freq of the char in the string 
       for(int i=0;i<n;i++){
        freq[s[i]-'a']++;
       }

       //now defining
       char charmin='a';
       string res="";
       stack<char>st;
          
        //process each char
        for(char ch:s){
            st.push(ch);
            freq[ch-'a']--;

            // calculating the minimum char
            while(charmin<='z' && freq[charmin-'a']==0){
                charmin++;
            }

            //now poping if top of the stack is less than or the minimum char 
           while(!st.empty() && st.top()<=charmin){
            res+=st.top();
            st.pop();
           }
        }

        while(!st.empty()){
            res+=st.top();
            st.pop();
        }

        return res;
    }
};