class Solution {
public:
    bool to_be_removed(TreeNode* root)
    {
        if (root==NULL) {return false;}
        if (root->left==NULL && root->right==NULL && root->val==0) {return true;}
        return false;
    }
    
    void post_order_removal(TreeNode* root)
    {
        if (root==NULL) {return;}
        post_order_removal(root->left);
        post_order_removal(root->right);
        if (to_be_removed(root->left))
        {
            delete root->left;
            root->left = NULL;
        }
        if (to_be_removed(root->right))
        {
            delete root->right;
            root->right = NULL;
        }
    }
    
    TreeNode* pruneTree(TreeNode* root) {
        post_order_removal(root);
        if (root->val==0 && root->left == NULL && root->right == NULL) {return NULL;}
        return root;
    }
};