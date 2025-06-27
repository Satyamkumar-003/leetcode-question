class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string x=a;
        int n=a.size();
        int m=b.size();
        int count=1;
         while (a.size() < b.size()) {
            a += x;
            count++;
        }

        while(a.size()<=10000){
           
            if(a.find(b)!= string::npos){
                return count;
            }
                a+=x;
                count++;
            
            
        }
        return -1;
    }
};