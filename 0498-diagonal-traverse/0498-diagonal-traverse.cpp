class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        if(mat.empty() || mat[0].empty())return {};
        
        vector<int>ans;
        int count=0;
        for(int d=0;d<n+m-1;d++){
            int r,c;
            if(d%2==0){
                r=(d<n)?d :n-1;
                c=d-r;
                while(r>=0 && c<m){
                    ans.push_back(mat[r][c]);
                    r--;
                    c++;
                }
            }else{
                c=(d<m)?d :m-1;
                r=d-c;
                while(c>=0 && r<n){
                    ans.push_back(mat[r][c]);
                    c--;
                    r++;
                }
            }

        }
        return ans;
    }
};