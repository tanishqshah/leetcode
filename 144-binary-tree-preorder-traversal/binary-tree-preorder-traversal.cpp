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
    void solve(vector<int>&answer,TreeNode* root){
        if(root == NULL){
            return;
        }
        answer.push_back(root->val);
        solve(answer,root->left);
        solve(answer,root->right);

    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>answer;
        solve(answer,root);
        return answer;
    }
};