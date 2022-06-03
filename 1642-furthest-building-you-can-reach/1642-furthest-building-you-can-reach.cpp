class Solution {
public:
    int furthestBuilding(vector<int>& nums, int brick, int ladder) {
        vector<int>diff;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]>0){
                diff.push_back(nums[i]-nums[i-1]);
            }
            else
                diff.push_back(0);
        }
        int count=0,high=0;
        priority_queue<int, vector<int>, greater<int> > pq;
        for(int i=1;i<nums.size();i++){
            int diff=nums[i]-nums[i-1];
            if(diff>0){
                if(pq.size()<ladder)
                {
                    pq.push(diff);
                }
                else{
                    int br=diff;
                    if(pq.size()>0 && pq.top()<diff){
                        br=pq.top();
                        pq.pop();
                        pq.push(diff);
                    }
                    if(brick-br>=0){
                        brick=brick-br;
                    }
                    else{
                        return i-1;
                    }
                }
            }
        }
        return nums.size()-1;
    }
};