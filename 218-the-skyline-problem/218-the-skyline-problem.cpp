class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& arr) {
        vector<pair<int, int>> list;
        vector<vector<int>> ans;
        int len = arr.size();
        for(int i=0; i<len; i++)
        {
            int sp = arr[i][0];
            int ep = arr[i][1];
            int ht = arr[i][2];
            list.push_back({sp,-ht});
            list.push_back({ep,ht});
        }
        
        sort(list.begin(), list.end());
        
        multiset<int> pq;
        
        int cht = 0;    // current height
        pq.insert(0);
        for(auto w: list)
        {
            int x = w.first;
            int ht = w.second;
            
            if(ht < 0)  // starting point
            {
                pq.insert(-ht);   // pushing positive
            }
            else
            {
                pq.erase(pq.find(ht));
            }
            
            if(cht != *pq.rbegin())
            {
                ans.push_back({w.first, cht = *pq.rbegin()});
            }
        }
        return ans;
    }
};