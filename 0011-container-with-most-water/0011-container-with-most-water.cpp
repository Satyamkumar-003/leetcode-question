class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int area=0;
        int maxarea=0;

        int l=0;
        int r=n-1;
        int len=0;
        int width=0;

        while(l<r){
            width=r-l;
            if(height[l]<height[r]){
                len=height[l];
                l++;
            }else{
                len=height[r];
                r--;
            }
            
            area=len*width;
            maxarea=max(maxarea,area);
        }

        // for(int i=0;i<n;i++){
        //     area=0;
        //     for(int j=i+1;j<n;j++){
        //         int len=min(height[i],height[j]);
        //         int width=j-i;
        //         area=len*width;
        //         maxarea=max(maxarea,area);
        //     }
        // }

        return maxarea;
    }
};