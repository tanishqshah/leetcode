class Solution {
public:
    static long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(), nums.end());
        long long score=0;
        for(int i=0; i<k; i++){
            int x=pq.top();
            score+=x;
            if (x==1){// early stop
                score+=(k-1-i);
                break;
            }
            pq.pop();
            pq.push((x+2)/3);
        }
        return score;
    }
};


auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();