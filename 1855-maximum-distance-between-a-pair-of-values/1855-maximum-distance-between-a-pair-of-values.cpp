class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int j=0;
        int x,y;
        int dist=0;
        for(int i=0;i<n;i++){
            j=i;

            x=j;
            y=m-1;
            while(x<=y){
                int mid=x+((y-x)/2);
                if(nums2[mid]>=nums1[i]){
                    dist=max(dist,mid-i);
                    x=mid+1;
                }else{
                    y=mid-1;
                }
            }
        }
        return dist;
    }
};