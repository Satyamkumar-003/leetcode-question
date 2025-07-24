class Solution {
public:
    int removestring(string& s,string rm,int score){
        int n=s.size();
        int t_score=0;
        stack<char>st;
        for(char ch:s){
            if(!st.empty() && st.top()==rm[0] && ch==rm[1]){
                t_score+=score;
                st.pop();
            }else{
                st.push(ch);
            }
        }

        s="";
        while(!st.empty()){
            s.push_back(st.top());
            st.pop();
        }
        reverse(s.begin(),s.end());

        return t_score;
    }

    
    int maximumGain(string s, int x, int y) {
        int n=s.size();
        int total=0;
        
        if(x>y){
            total+=removestring(s,"ab",x);
            total+=removestring(s,"ba",y);
        }else{
            total+=removestring(s,"ba",y);
            total+=removestring(s,"ab",x);
            
        }

        return total;
    }
};