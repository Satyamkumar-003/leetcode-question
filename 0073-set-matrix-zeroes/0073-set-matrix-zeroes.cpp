class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int mt[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mt[i][j]=matrix[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mt[i][j]==0){
                    int x=i;
                    int y=j;
                   int q=0;
                    while(q<m){
                        matrix[x][q]=0;
                        q++;
                    }
                    q=0;
                    while(q<n){
                        matrix[q][y]=0;
                        q++;
                    }
                }
            }
        }

        // int n=matrix.size();
        // int m=matrix[0].size();
        // // vector<vector<int>>& result(n,m);
        // for( int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if(matrix[i][j]==0){
        //             for(int k=i;k<i+1;k++){
        //                 for(int p=0;p<m;p++){
        //                     matrix[k][p]=-1;
        //                 }
        //                 // for(int c=0;c<n;c++){
        //                 //     for(int d=j;d<j+1;d++){
        //                 //         matrix[c][d]=0;
        //                 //     }
        //                 // }
        //             }
        //             for(int c=0;c<n;c++){
        //                     for(int d=j;d<j+1;d++){
        //                         matrix[c][d]=-1;
        //                     }
        //                 }
                        
        //         }
        //     }
        // }
        // for(int x=0;x<n;x++){
        //     for(int y=0;y<m;y++){
        //         if(matrix[x][y]==-1){
        //             matrix[x][y]=0;
        //         }
        //     }
        // }
    }
};