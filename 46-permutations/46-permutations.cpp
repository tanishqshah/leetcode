class Solution {
public:
    void permute(vector<vector<int>>&res,vector<int>&num,int start){
        if(start==num.size()-1)
        {
            res.push_back(num);
            return;
        }
        for(int i=start;i<num.size();i++)
        {
            swap(num[i],num[start]);
            permute(res,num,start+1);
            swap(num[i],num[start]);
        }
    }
    vector<vector<int>> permute(vector<int>& num) {
        vector<vector<int>>res;
        if(num.size()==0)
        {
            return res;
        }
        // sort(num.begin(),num.end());
        permute(res,num,0);
        return res;
    }
};