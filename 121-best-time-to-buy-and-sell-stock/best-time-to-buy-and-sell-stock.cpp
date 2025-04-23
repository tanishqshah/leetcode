class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int answer=0;
        int minValue=INT_MAX;
        for(int i=0;i<prices.size();i++){
            minValue = min (minValue , prices[i]);
            answer = max(answer , prices[i]-minValue);
        }
        return answer;
    }
};