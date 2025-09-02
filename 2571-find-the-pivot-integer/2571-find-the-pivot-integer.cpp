class Solution {
public:
    int pivotInteger(int n) {
        int sum=0;
        for(int i=0;i<=n;i++){
            sum+=i;
        }
        cout<<sum<<endl;
        int fsum=0;
        for(int i=1;i<=n;i++){
            fsum+=i;
            sum-=i-1;
            
            if(fsum==sum)return i;
        }
        return -1;
    }
};