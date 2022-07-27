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
    void flatten(TreeNode* root) {
        if(root==NULL)
            return ;
        TreeNode* left1=root->left;
        TreeNode* right1=root->right;
        root->left=NULL;
        flatten(left1);
        flatten(right1);
        root->right=left1;
        TreeNode* curr=root;
        
        while(curr->right!=NULL)
            curr=curr->right;
        
        curr->right=right1;
    }
};