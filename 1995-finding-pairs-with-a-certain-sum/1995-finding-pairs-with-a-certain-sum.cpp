class FindSumPairs {
public:
    vector<int>vec1;
    vector<int>vec2;
    unordered_map<int,int>freq;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        vec1=nums1;
        vec2=nums2;
        for(int i=0;i<vec2.size();i++){
            freq[vec2[i]]++;
        }
    }
    
    void add(int index, int val) {
        int preval=vec2[index];
        freq[preval]--;
        vec2[index]+=val;
        freq[vec2[index]]++;
    }
    
    int count(int tot) {
        int con=0;
        for(int num :vec1){
            int need=tot-num;
            if(freq.count(need)){
                con+=freq[need];
            }
        }
        return con;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */