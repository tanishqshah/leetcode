class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1);
        for(int i=0;i<=n;i++)
        {
            int n=i;
            unsigned int count = 0;
            while (n) {
                n &= (n - 1);
                count++;
            }
            ans[i]=count;
        }
        
        return ans;
    }
};