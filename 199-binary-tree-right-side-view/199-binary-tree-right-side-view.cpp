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
    void solve(vector<int>&ans,TreeNode* root,int k){
        if(root==NULL)
            return;
        if(k==ans.size())
            ans.push_back(root->val);
        solve(ans,root->right,k+1);
        solve(ans,root->left,k+1);
        
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        solve(ans,root,0);
        return ans;
    }
};