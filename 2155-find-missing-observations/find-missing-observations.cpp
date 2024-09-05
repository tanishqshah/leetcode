class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
         int sum =accumulate(rolls.begin(),rolls.end(),0);
        int total=rolls.size()+n;
        int needed=mean*total-sum;
        vector<int>ans;
        if(needed<n||needed>(n*6))return ans;
        else
        {
            int full=needed/n;
            int extra=needed%n;
            for(int i=0;i<n;i++)
            {
                if(extra>0)ans.push_back(full+1);
                else ans.push_back(full);
                extra=max(0,extra-1);
            }
        }
        return ans;
    }
};