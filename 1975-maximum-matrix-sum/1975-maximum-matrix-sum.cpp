class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int least=INT_MAX;
        int count=0;
        long long sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                sum+=abs(matrix[i][j]);
                least=min(abs(matrix[i][j]),least);
                if(matrix[i][j]<0)count++;
            }
        }
        
        
        if(count%2==0){
            return sum;
        }else{
            return sum-(2*least);
        }
        
    }
};