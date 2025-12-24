class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int count=0;

        int sumApple=accumulate(apple.begin(), apple.end(), 0);

        sort(capacity.begin(),capacity.end());

        for(int i=capacity.size()-1;i>=0;i--){
            if(sumApple>0){
                count++;
            }
            sumApple=sumApple-capacity[i];
        }
        return count;
    }
};