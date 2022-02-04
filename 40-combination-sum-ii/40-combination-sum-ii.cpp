class Solution {
public:
    void getsum(vector<int>&v,vector<vector<int>>&vec,int index,vector<int>&A,int B)
{
    if(B==0)
        return vec.push_back(v);
    if(B<0)
        return;
    for(int i=index;i<A.size();i++)
    {
        if(i==index || A[i]!=A[i-1])
        {
            v.push_back(A[i]);
            getsum(v,vec,i+1,A,B-A[i]);
            v.pop_back();
        }
    }
}
    
    vector<vector<int>> combinationSum2(vector<int>& A, int B) {
        int n=A.size();
    sort(A.begin(),A.end());
    vector<int>v;
    vector<vector<int>>vec;
    getsum(v,vec,0,A,B);
    return vec;
    }
};