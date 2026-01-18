class Solution {
    public String toLowerCase(String s) {
        int n=s.length();
        StringBuilder st=new StringBuilder();
        for(int i=0;i<n;i++){
            char ch=s.charAt(i);

            if(ch>='A' && ch<='Z'){
                ch=(char)(ch+32);
            }

            st.append(ch);
        }
        return st.toString();
        
    }
}