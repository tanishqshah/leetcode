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
    void solve(unordered_map<int,int>&mp , TreeNode* root,int lvl,int &check,int x,int y){
        if(root==NULL)
            return ;
        if(root->left && root->right){
            if(root->left->val==x && root->right->val==y)
                check=1;
            if(root->left->val==y && root->right->val==x)
                check=1;
        }
        mp[root->val]=lvl;
        solve(mp,root->left,lvl+1,check,x,y);
        solve(mp,root->right,lvl+1,check,x,y);
        return ;
    }
    bool isCousins(TreeNode* root, int x, int y) {
        unordered_map<int,int>mp;
        int check=0;
        int lvl=0;
        solve(mp,root,lvl,check,x,y);
        if(check==1)
            return false;
        if(mp[x]==mp[y])
            return true;
        return false;
    }
};