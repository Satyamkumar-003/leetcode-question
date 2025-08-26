class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n=dimensions.size();
        float ans=INT_MIN;
        float f;
        float s;
        float digarea=INT_MIN;
        for(int i=0;i<n;i++){
            float first=dimensions[i][0];
            float second=dimensions[i][1];
            first*=first;
            second*=second;
            float value=sqrt(first+second);
            // cout<<first<<" "<<second<<" "<<value<<endl;
            float fi=dimensions[i][0];
            float si=dimensions[i][1];
            float ar=fi*si;
            if(ans<value){
                ans=value;
                // cout<<ans<<endl;
                f=dimensions[i][0];
                s=dimensions[i][1];
                float area=f*s;
                digarea=area;
                // cout<<first<<" "<<second<<endl;
            }else if(ans==value && digarea<ar){
                digarea=ar;
            }
        }
        // cout<<f<<" "<<s<<endl;
        return digarea;
    }
};