class Solution {
public:
    int countCollisions(string directions) {
        int n=directions.size();
        int i=0;
        while(i<n && directions[i]=='L'){
            i++;
        }
        int k=n-1;
        
        while(k>=0 && directions[k]=='R'){
            k--;
        }
        int count=0;
        
        for(int j=i;j<=k;j++){
            if(directions[j]!='S'){
                count++;
            }
        }

        return count;
    }
};