class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int n=score.size();
        int m=score[0].size();
        // vector<int>arr;
        // for(int i=0;i<n;i++){
        //     arr.push_back(score[i][k]);
        // }
        // sort(arr.begin(),arr.end());
        //find max
        //swap with first 
        // then do for the rest 
        int a=0;
        while(a<n){
            int maxi=0;
            // max
            for(int i=a;i<n;i++){
                maxi=max(maxi,score[i][k]);
            }
            // cout<<maxi<<" ";

            for(int j=0;j<n;j++){
                if(score[j][k]==maxi){
                    
                    for(int l=0;l<m;l++){
                        int temp=score[a][l];
                        score[a][l]=score[j][l];
                        score[j][l]=temp;
                    }
                    break;
                }
            }
            a++;

        }

        return score;
        
    }
};