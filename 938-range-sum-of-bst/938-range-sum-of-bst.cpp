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
    int ans(TreeNode* root,int low,int high){
        int count=0;
        if(root==NULL){
            return 0;
        }
        if(root->val >= low && root->val<=high){
            count=root->val;
        }
        return (count+ans(root->left,low,high)+ans(root->right,low,high));
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        return ans(root,low,high);
    }
};