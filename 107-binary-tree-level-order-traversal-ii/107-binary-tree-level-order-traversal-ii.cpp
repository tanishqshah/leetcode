/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(vector<vector<int>>&ans,TreeNode* root,int lvl){
        if(root==NULL)
            return ;
        if(ans.size()==lvl)
            ans.push_back(vector<int>());
        ans[lvl].push_back(root->val);
        solve(ans,root->left,lvl+1);
        solve(ans,root->right,lvl+1);
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
        solve(ans,root,0);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};