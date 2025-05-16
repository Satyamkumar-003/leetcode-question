class Solution {
public:
    int check(int target, vector<int>& tops, vector<int>& bottoms) {
        int rotations_top = 0;
        int rotations_bottom = 0;
        
        for (int i = 0; i < tops.size(); ++i) {
            if (tops[i] != target && bottoms[i] != target) {
                return -1;
            } else if (tops[i] != target) {
                rotations_top++;  // we need to rotate top[i]
            } else if (bottoms[i] != target) {
                rotations_bottom++;  // we need to rotate bottom[i]
            }
        }
        
        return min(rotations_top, rotations_bottom);
    }
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int rotations = check(tops[0], tops, bottoms);
        if (rotations != -1) return rotations;
        cout<<rotations;
        
        // If tops[0] didn't work, try bottoms[0]
        if (tops[0] == bottoms[0]) return -1; 
        return check(bottoms[0], tops, bottoms);





        
    //     int count_top=0;
    //     int count_bottoms=0;
    //     int tocomp=tops[0];
        
    //     for(int i=0;i<tops.size();i++){
    //         if(tocomp==tops[i])count_top++;
    //     }
    //     int cmp=bottoms[0];
    //     for(int i=0;i<bottoms.size();i++){
    //         if(cmp==bottoms[i])count_bottoms++;
            
    //     }
    //     int c=0;
    //     if(count_top>count_bottoms){
    //          c=tocomp;
    //     }else{
    //          c=cmp;
    //     }

    //     // int c=tops[0];/

    //    cout<<c<<endl;
    //     int tswap=0;
    //     int bswap=0;
    //     for(int i=0;i<tops.size();i++){
    //         if(tops[i]!=c && bottoms[i]!=c)return -1;
    //         cout<<tops[i]<<" "<<bottoms[i];
    //         if(tops[i]!=c ){
                
    //             tswap++;
    //         }
    //         if(bottoms[i]!=c ){
               
    //             bswap++;
    //         }
    //     }

    //     return min(tswap,bswap);
    }
};