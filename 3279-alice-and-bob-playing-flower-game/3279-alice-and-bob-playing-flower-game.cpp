class Solution {
public:
    long long flowerGame(int n, int m) {
        long long ans=0;
        long long nodd=0,neven=0,modd=0,meven=0;
        if(n%2!=0){
            nodd=(n/2)+1;
            neven=n/2;
        }else{
            nodd=n/2;
            neven=n/2;
        }
        if(m%2!=0){
            modd=(m/2)+1;
            meven=(m/2);
        }else{
            meven=m/2;
            modd=m/2;
        }
        

        return nodd*meven + modd*neven;
    }
};