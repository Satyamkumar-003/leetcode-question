class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n=timeSeries.size();
        int totaltime=0;
        for(int i=0;i<n-1;i++){
            if(timeSeries[i]+duration>timeSeries[i+1]){
                totaltime+=timeSeries[i+1]-timeSeries[i];
            }else{
                totaltime+=duration;
            }
        }
        return totaltime+duration;
    }
};