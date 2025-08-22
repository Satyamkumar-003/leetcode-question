class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        int row_min=INT_MAX;
        int row_max=INT_MIN;
        int col_max=INT_MIN;
        int col_min=INT_MAX;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    row_max=max(i,row_max);
                    col_max=max(j,col_max);
                    row_min=min(i,row_min);
                    col_min=min(j,col_min);

                }
            }
        }
        int row=row_max-row_min+1;
        int col=col_max-col_min+1;
        cout<<row<<" "<<col<<endl;
        return row*col;
    }
};