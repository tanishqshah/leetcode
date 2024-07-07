class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int answer=0;
        for(int i =1 ;i<colors.size()-1;i++){
            if(colors[i]!= colors[i+1] && colors[i]!=colors[i-1])
                answer++;
        }
        int n=colors.size();

        if(colors[0]!=colors[1] && colors[0]!=colors[n-1])
            answer++;
        if(colors[n-1]!=colors[n-2] && colors[n-1]!=colors[0])
            answer++;

        return answer;
    }
};