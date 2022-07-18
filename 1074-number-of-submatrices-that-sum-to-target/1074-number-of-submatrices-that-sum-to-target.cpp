class Solution {
public:
    int result=0,target;
    unordered_map<int,int> map;
    void get_result(vector<int>& nums)                          
    {
        int sum=0;
        map.clear();
        map[0]++;
        for(int &i:nums)
        {
            sum+=i;
            result+=map[sum-target];  
            map[sum]++;              
        }
    }
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) 
    {
        this->target=target;
        vector<int> row(matrix[0].size());
        for(int i=0;i<matrix.size();i++)                    
        {
            fill(row.begin(),row.end(),0);                  
            for(int j=i;j<matrix.size();j++)
            {
                for(int x=0;x<matrix[0].size();x++)         
                    row[x]+=matrix[j][x];
                get_result(row);
            }
        }
        return result;
    }
};