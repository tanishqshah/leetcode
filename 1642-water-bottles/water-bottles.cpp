class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int answer=numBottles;
        while(numBottles>=numExchange){
            answer =  answer + numBottles / numExchange;
            numBottles = numBottles / numExchange + numBottles%numExchange;
        }

        return answer;
    }
};