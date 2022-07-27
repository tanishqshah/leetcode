// class Solution {
// public:
//     void flatten(TreeNode* root) {
//         if(root==NULL)
//             return ;
//         TreeNode* left1=root->left;
//         TreeNode* right1=root->right;
//         root->left=NULL;
//         flatten(left1);
//         flatten(right1);
//         root->right=left1;
//         TreeNode* curr=root;
        
//         while(curr->right!=NULL)
//             curr=curr->right;
        
//         curr->right=right1;
//     }
// };
class Solution {
public:    
    void help(TreeNode *root)
    {
        if(root==NULL)
            return;
        TreeNode*left_pointer=root->left;
        TreeNode*right_pointer=root->right;
        
        help(root->left);
        help(root->right);
        
        if(left_pointer!=NULL)
        {
                root->right=left_pointer;
                TreeNode* curr=root;
                while(curr->right!=NULL){
                    curr=curr->right;
                }
            curr->right=right_pointer;
            
        }
        root->left=NULL;
        return;
    }
    void flatten(TreeNode* root) {
        help(root);
    }
};