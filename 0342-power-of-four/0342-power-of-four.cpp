class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<1)return false;
        if(n==1)return true;
        long long i=1;
        while(i<=n){
            if(i==n)return true;
            i*=4;
        }
        return false;
    }
};