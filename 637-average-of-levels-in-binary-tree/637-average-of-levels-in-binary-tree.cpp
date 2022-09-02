class Solution {
public:
    
    void solve(TreeNode* root,int lvl,unordered_map<int,vector<int>> &mp){
        if(root==NULL)
            return;
        mp[lvl].push_back(root->val);
        
        solve(root->left,lvl+1,mp);
        solve(root->right,lvl+1,mp);
    }
    vector<double> averageOfLevels(TreeNode* root) {
        unordered_map<int,vector<int>> mp;
        vector<double> Avg;
        int lvl=0;
        solve(root,lvl,mp);
        // accessing node levelwise
        for(int i=0;i<mp.size();i++){
            double sum=0;
            int noOfNode=mp[i].size();
            // summing all the node of particular level
            for(auto x:mp[i]){
                sum+=x;
            }
            // pushing average of nodes in a level
            Avg.push_back(sum/noOfNode);
        }
        return Avg;
        
    }
};