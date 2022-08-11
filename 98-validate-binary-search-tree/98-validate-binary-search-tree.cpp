class Solution {
public:
    void solve(TreeNode* root,vector<int>&ans){
        if(root==NULL)
            return ;
        solve(root->left,ans);
        ans.push_back(root->val);
        solve(root->right,ans);
    }
    bool isValidBST(TreeNode* root) {
        vector<int>ans;
        solve(root,ans);
        for(int i=1;i<ans.size();i++){
            if(ans[i]<ans[i-1]){
                return false;
            }
            if(ans[i]==ans[i-1])
                return false;
        }
        return true;
    }
};