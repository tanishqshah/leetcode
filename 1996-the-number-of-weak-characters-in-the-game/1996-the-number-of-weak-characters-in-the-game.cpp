class Solution {
    
public:
    static bool compare(vector<int> &a,vector<int> &b){
        if(a[0] != b[0]) return a[0] > b[0];
        return a[1] < b[1];
    }

        
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(),properties.end(),compare);
        int currentMax = INT_MIN;
        int ans = 0;
        for(int i = 0;i<properties.size();i++){
            if(currentMax <= properties[i][1]){
                currentMax = properties[i][1];
            }else{
                ans++;
            }
        }
        return ans;
    }
};