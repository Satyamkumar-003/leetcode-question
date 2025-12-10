class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int ct=0,ct1=0;
        int n=students.size();
        for(int i=0;i<n;i++){
            if(students[i]==0){
                ct++;
            }else{
                ct1++;
            }
        }

        for(int i=0;i<n;i++){
            if(sandwiches[i]==0){
                if(ct>0){
                    ct--;
                }else{
                    return n-i;
                }
            }else{
                if(ct1>0){
                    ct1--;
                }else{
                    return n-i;
                }
            }
        }
        return 0;
    }
};