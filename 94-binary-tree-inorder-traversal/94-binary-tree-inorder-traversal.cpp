class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode* temp;
        while(root)
        {
            if(root->left)
            {
                temp=root->left;
                while(temp->right)
                {
                    temp=temp->right;
                }
                temp->right=root;
                temp=root->left;
                root->left=NULL;
                root=temp;
            }
            else
            {
                ans.push_back(root->val);
                root=root->right;
                
            }
        }
        return ans;
        
    }
};