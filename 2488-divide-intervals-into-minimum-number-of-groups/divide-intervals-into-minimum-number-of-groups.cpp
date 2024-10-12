class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        int max=0;
        for(int i=0;i<intervals.size();i++){
            max = intervals[i][1]>max ? intervals[i][1] : max; 
        }
        vector<int>operationArray (max+2 , 0);
        for(int i =0 ;i<intervals.size();i++){
            operationArray[intervals[i][0]]++;
            operationArray[intervals[i][1]+1]--;
        }

        int answer=1;

        for(int i=1;i<max+1;i++){
            operationArray[i] = operationArray[i] + operationArray[i-1];
            answer = answer < operationArray[i] ? operationArray[i] : answer;
        }

        return answer;
    }
};