class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ext=numBottles/numExchange;
        int n=numBottles;
        int empty=numBottles;
        int count=0;
        while(empty>=numExchange){
            empty-=numExchange;
            if(empty>=0){
                count++;
                numExchange++;
                empty++;
            }
        }

        return numBottles+count;
    }
};