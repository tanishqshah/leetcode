class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>prefixArray(arr.size(),0);
        for(int i=0;i<arr.size();i++){
            if(i==0)
                prefixArray[i] = arr[i];
            else
                prefixArray[i] = arr[i] ^ prefixArray[i-1];
        }
        for(int i=0;i<arr.size();i++){
            cout<<prefixArray[i]<<" ";
        }
        vector<int>result;
        for(int i=0;i<queries.size();i++){
            if(queries[i][0]==0)
                result.push_back(prefixArray[queries[i][1]]);
            else if(queries[i][0]==queries[i][1])
                result.push_back(arr[queries[i][1]]);
            else
                result.push_back(prefixArray[queries[i][1]] ^ prefixArray[queries[i][0]-1]);
        }
        return result;
    }
};