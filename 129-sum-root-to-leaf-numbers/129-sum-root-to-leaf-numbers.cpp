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
    int ans=0;
    void solve(TreeNode* root , int temp){
        
        if(root==NULL){
            return ;
        }
        temp=temp*10+root->val;
        solve(root->left,temp);
        solve(root->right,temp);
        if(root->left==NULL && root->right==NULL)
            ans=ans+temp;
    }
    int sumNumbers(TreeNode* root) {
        int temp=0;
        solve(root,temp);
        return ans;
    }
};