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
    int calculateSum(TreeNode* root,TreeNode* parent,TreeNode* gp){
        if(root==nullptr)
            return 0;
        int sum=0;
        if(gp && gp->val%2==0)
            sum=sum+root->val;
        sum=sum+calculateSum(root->left,root,parent);
        sum=sum+calculateSum(root->right,root,parent);
        return sum;
    }
    int sumEvenGrandparent(TreeNode* root) {
        return calculateSum(root,nullptr,nullptr);
    }
};