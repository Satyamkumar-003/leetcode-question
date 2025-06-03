class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        if(target == 1) return 0;
        int temp = target;
        int ans = 0;

        while(temp>1) {
            if(maxDoubles == 0) {
                ans += temp-1;
                break;
            }
            if(temp%2==0) {
                temp = temp/2;
                maxDoubles--;
            }else {
                    temp-=1;
            }
            ans++;
        }
        
        return ans;
        
    }
};