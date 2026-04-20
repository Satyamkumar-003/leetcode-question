class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i=0;
        int n=colors.size()-1;
        while(i<=n && (colors[i]==colors[n])){
            n--;
        }
        int first=n-i;
        i=0,n=colors.size()-1;
        while(n>=1 && (colors[i]==colors[n])){
            i++;
        }
        int sec=n-i;
        return max(first,sec);
    }
};