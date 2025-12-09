class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        int n = nums.size();
        const int MOD = 1e9 + 7;
        long long ans = 0;

        // Count occurrences to the right initially
        unordered_map<long long,int> rightCount;
        unordered_map<long long,int> leftCount;
        rightCount.reserve(n*2);
        leftCount.reserve(n*2);

        for (int x : nums) rightCount[x]++;

        // iterate middle index i
        for (int i = 0; i < n; ++i) {
            long long v = nums[i];
            // remove current middle from right side (we treat i as middle, so right is i+1..n-1)
            rightCount[v]--;
            if (rightCount[v] == 0) rightCount.erase(v);

            long long target = 2 * v;
            // number of choices on left * number on right
            long long leftMatches = 0, rightMatches = 0;
            auto itL = leftCount.find(target);
            if (itL != leftCount.end()) leftMatches = itL->second;
            auto itR = rightCount.find(target);
            if (itR != rightCount.end()) rightMatches = itR->second;

            ans = (ans + (leftMatches * rightMatches) ) % MOD;

            // then add current middle into left for future iterations
            leftCount[v]++;
        }

        return (int)ans;
        // int n=nums.size();
        // int mod=1e9 +7;
        // int count=0;

        // for(int i=1;i<n;i++){
        //     int a=nums[i];
        //     int b=2*a;
        //     int x=i-1;
        //     int countprev=0,countnext=0;
        //     while(x>=0){
        //         if(nums[x]==b){
        //             countprev++;
        //             countprev=countprev%mod;
                    
        //         }
        //         x--;
        //     }
        //     x=i+1;
        //     while(x<n){
        //         if(nums[x]==b){
        //             countnext++;
        //             countnext=countnext%mod;
                    
        //         }
        //         x++;
        //     }

        //     int diff=min(countnext,countprev);
        //     count+=diff;
        //     count=count%mod;
        // }

        // return count;


        // for(int i=0;i<n;i++){
        //     bool half=false;
        //     for(int j=i+1;j<n;j++){

        //         float a=nums[j];
        //         float b=nums[i]/2;
            
        //         if(nums[i]==nums[j]){
        //             if(half){
        //                 // cout<<nums[i]<<" "<<b<<" "<<a<<endl;
        //                 count++;
        //                 count=count%mod;
        //             }
        //         }
        //         if(a==b){
        //             half=true;
        //         }
        //     }
        // }
        
        // return count;
    }
};