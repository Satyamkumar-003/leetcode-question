class Solution {
public:
    int smallestNumber(int n) {
        int count=0;
        while(n>0){
            count++;
            n/=2;
        }
        int ans=0;
        while(count){
            ans+=pow(2,--count);

        }
        return ans;
    }
};