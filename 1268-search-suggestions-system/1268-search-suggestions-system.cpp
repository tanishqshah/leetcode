class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string> &arr,
                                             string query) {
        vector<vector<string>>ans;
    unordered_map<string,vector<string>>mp;
    string add="";
    for(int i=0;i<arr.size();i++){
        add="";
        for(int j=0;j<arr[i].size();j++){
            add=add+arr[i][j];
            mp[add].push_back(arr[i]);
        }
        add="";
    }
    for(auto it = mp.begin(); it != mp.end(); it++){
        sort(it->second.begin(), it->second.end());
        if(it->second.size()>3){
        it->second.resize(std::distance(it->second.begin(), std::unique(it->second.begin(), it->second.begin() + 3)));
        }
        else{
            it->second.resize(std::distance(it->second.begin(), std::unique(it->second.begin(), it->second.begin() + it->second.size())));
        }
    }
    add="";
    vector<string>no;
    int x=0;
    for(int i=0;i<query.length();i++){
        add=add+query[i];
        if(mp[add].empty()){
            ans.push_back(no);
        }
        else{
            ans.push_back(mp[add]);
            x++;
        }
    }
    return ans;
    }
};