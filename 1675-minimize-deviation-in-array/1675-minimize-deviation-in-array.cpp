class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int> pq;
        int min1=INT_MAX;
        for(int i : nums){
            if(i%2!=0)
                i=i*2;
            min1=min(min1,i);
            pq.push(i);  
        }
        int diff=INT_MAX;
        while(pq.top()%2==0){
            int max=pq.top();
            pq.pop();
            diff=min(diff,max-min1);
            min1=min(max/2,min1);
            pq.push(max/2);
        }
        
        return min(diff,pq.top()-min1);
    }
};