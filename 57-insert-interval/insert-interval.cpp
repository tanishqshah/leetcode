class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        int start = intervals[0][0];
        int end = intervals[0][1];
        vector<vector<int>>answer;

        for(auto interval : intervals){
            if(end>=interval[0])
                end=max(interval[1],end);
            else{
                answer.push_back({start,end});
                start= interval[0];
                end= interval[1];
            }
        }
        answer.push_back({start,end});
        return answer;

        return answer;
    }
};