class Solution {
public:
    int lastStoneWeight(vector<int>& nums) {
        priority_queue<int> pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        
        while(!pq.empty()){
            if(pq.size()==1){
                return pq.top();
                break;
            }
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            if(x!=y)
            {
                pq.push(x-y);
            }
                
        }
        return 0;
    }
};