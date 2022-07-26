class Solution {
public:
    bool solve(TreeNode* root,vector<TreeNode*>&arr,TreeNode* p){
        if(root==NULL)
            return false;
        if(root==p){
            arr.push_back(root);
            return true;
        }
        arr.push_back(root);
        if(solve(root->left,arr,p) || solve(root->right,arr,p))
            return true;
        arr.pop_back();
        return true;
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         vector<TreeNode* >arr1;
//         vector<TreeNode* >arr2;
//         TreeNode* root1=root;
//         if(root==p && root==q)
//             return root;
//         if(solve(root,arr1,p) && solve(root,arr2,q)){
//             int mini=max(arr1.size(),arr2.size());
//             for(int i=1;i<mini;i++){
//                 if(arr1.size()==i)
//                     return arr2[i-1];
//                 else if(arr2.size()==i)
//                     return arr1[i-1];
//                 if(arr1[i]!=arr2[i])
//                     return arr1[i-1];
//             }
//         }
//         return root;
            if(root==NULL) return NULL;
    
         if(root==p || root==q) return root;
    
         TreeNode* left=lowestCommonAncestor(root->left,p,q);
         TreeNode* right=lowestCommonAncestor(root->right,p,q);
    
         if(left!=NULL and right!=NULL) return root;
    
         if(left==NULL and right==NULL) return NULL;
    
         return left!=NULL? left : right;
     
    }
};