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
    void get(TreeNode* root , vector<int>&ans){
        if(root==NULL)
            return;
        get(root->left,ans);
        ans.push_back(root->val);
        get(root->right,ans);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int>ans;
        get(root,ans);
        int res=INT_MAX;
        for(int i=1;i<ans.size();i++){
            if(abs(ans[i]-ans[i-1])<res)
                res=abs(ans[i]-ans[i-1]);
        }
        return res;
    }
};