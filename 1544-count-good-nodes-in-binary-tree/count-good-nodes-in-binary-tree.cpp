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
    void solve(int val , TreeNode* root , int &count){
        if(!root){
            return ;
        }
        if(val<=root->val){
            val=root->val;
            count++;
        }
        solve(val,root->left,count);
        solve(val,root->right,count);
    }
    int goodNodes(TreeNode* root) {
        int count=1;
        solve(root->val , root->left, count);
        solve(root->val , root->right, count);
        return count;
    }
};