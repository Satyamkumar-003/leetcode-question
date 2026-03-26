class Solution {
public:
    int reverse(int x) {
        // int y=x;
        long long ans=0;
        bool type=false;
        if(x==-2147483648)return 0;
        int mod=1e9+7;
        
        if(x<0){
            x=abs(x);
            type=true;
        }
        while(x){
            int rem=x%10;
            ans=ans*10+rem;
           
            x/=10;
        }
       
       if(ans>2147483648)return 0;


        if(type){
            return -ans;
        }else {
            return ans;
        }
    }
};