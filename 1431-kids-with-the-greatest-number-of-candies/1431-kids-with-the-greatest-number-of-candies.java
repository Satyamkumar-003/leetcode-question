class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        ArrayList<Boolean> list=new ArrayList<>();
        int n=candies.length;
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=Math.max(maxi,candies[i]);
        }
        for(int i=0;i<n;i++){
            if((extraCandies+candies[i])<maxi){
                list.add(false);

            }else{
                list.add(true);
            }
        }
        return list;
    }
}