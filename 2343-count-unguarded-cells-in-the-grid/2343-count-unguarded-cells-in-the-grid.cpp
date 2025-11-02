class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>>grid(m,vector<int>(n,0));
        // cout<<grid[0][0];
        int nw=walls.size();
        int i=0;
        int ng=guards.size();
        //at wals -2
        // at guades 1
        // vesion by guard -1
        //
        for(int i=0;i<nw;i++){
            int j=0;
                grid[walls[i][j]][walls[i][j+1]]=-2; 
        }
        for(int i=0;i<ng;i++){
            int j=0;
                grid[guards[i][j]][guards[i][j+1]]=1; 
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    //for right
                    int k=i,l=j;
                    l++;
                    while(l<n && grid[k][l]!=-2 && grid[k][l] != 1){
                        if(grid[k][l]!=1){
                            grid[k][l]=-1;
                            l++;
                        }
                        
                    }

                    //for left
                    k=i;
                    l=j;
                    l--;
                    while(l>=0 && grid[k][l]!=-2 && grid[k][l] != 1){
                        if(grid[k][l]!=1){
                        grid[k][l]=-1;
                        l--;
                        }
                    }

                    // for up
                    k=i;
                    l=j;
                    k--;
                    while(k>=0 && grid[k][l]!=-2 && grid[k][l] != 1){
                        if(grid[k][l]!=1){
                            grid[k][l]=-1;
                            k--;
                        }
                    }


                    //for down
                    k=i;
                    l=j;
                    k++;
                    while(k<m && grid[k][l]!=-2 && grid[k][l] != 1){
                        if(grid[k][l]!=1){
                            grid[k][l]=-1;
                            k++;
                        }
                    }

                }
            }
        }

        int count=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    count++;
                }
            }
        }


        return count;
    }
};