class Solution {
public:
    multiset<int> s;
    
    void inorder(TreeNode*root)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left);
        s.insert(root->val);
        inorder(root->right);
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        inorder(root1);
        inorder(root2);
        vector<int> v;
        for(auto x:s)
        {
            v.push_back(x);
        }
        return v;
    }
};