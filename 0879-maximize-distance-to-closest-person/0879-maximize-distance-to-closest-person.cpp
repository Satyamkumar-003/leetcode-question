class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n=seats.size();
        int s=0;
        int e=0;
        int maxdiff=0;
        int i=0;
        if(seats[0]==0){
            i=0;
            while(seats[i]==0){
                i++;
            }
            int diff=i;
            
            maxdiff=max(diff,maxdiff);
        }
        int x=i;
        int count=0;
        for(int i=x;i<n;i++){
            if(seats[i]==1){
                count=0;
            }
            else if(seats[i]==0){
                count++;
            }
            // cout<<"outer "<<count<<" ";
            int ncount=count;
            if(i==n-1 && seats[i]==0){
                maxdiff=max(maxdiff,count);
            }
            if(ncount>0 &&ncount%2==0){
                ncount/=2;
                // cout<<"en "<<ncount<<endl;
                maxdiff=max(ncount,maxdiff);
            }else if(ncount>0 &&ncount%2!=0){
                ncount/=2;
                ncount++;
                // cout<<"od "<<ncount<<endl;
                maxdiff=max(ncount,maxdiff);
            }
        }
        return maxdiff;
    }
};