class Solution {
    public boolean isPalindrome(int x) {
        int a=x;
        if(x<0 || (x%10==0 && x!=0)){
            return false;
        }

        int half=0;
        while(x>half){
            half=half*10+x%10;
            x/=10;
        }
        if(x==half || half/10==x)return true;
        return false;
    }
}