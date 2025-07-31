class Solution {
public:
    string largestTimeFromDigits(vector<int>& arr) {
        int n=arr.size();
        int mtime=-1;
        string str="";
        sort(arr.begin(),arr.end());
        do{
            int hour=arr[0]*10 + arr[1];
            int minute=arr[2]*10 + arr[3];

            if(hour<24 && minute<60){
                int totaltime=hour*60 +minute;
                if(totaltime>mtime){
                    mtime=totaltime;

                    str=(hour<10 ? "0":"")+to_string(hour)+":"+(minute<10 ? "0":"")+
                    to_string(minute);
                }
            }
            
        }while(next_permutation(arr.begin(),arr.end()));

        return str;
    }
};