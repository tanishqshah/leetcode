class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans;
        int j=n;
        for(int i=0;i<n/2;i++){
            ans.push_back(-j);
            ans.push_back(j);
            j--;
        }
        if(n%2!=0)
            ans.push_back(0);
        return ans;
    }
};