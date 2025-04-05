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
    int solve(TreeNode* root,int &answer){
        if(!root)
            return 0;
        int lval=solve(root->left,answer);
        int rval=solve(root->right,answer);
        answer = max(answer,lval+rval);
        return 1+max(lval,rval);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int answer=0;
        solve(root,answer);
        return answer;
    }
};