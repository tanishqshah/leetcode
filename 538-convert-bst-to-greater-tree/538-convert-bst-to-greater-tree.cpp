class Solution {
private:
    int cur_sum = 0;
public:
    void travel(TreeNode* root){
        if (!root) return;
        if (root->right) travel(root->right);
        
        root->val = (cur_sum += root->val);
        if (root->left) travel(root->left);
    }
    TreeNode* convertBST(TreeNode* root) {
        travel(root);
        return root;
    }
};