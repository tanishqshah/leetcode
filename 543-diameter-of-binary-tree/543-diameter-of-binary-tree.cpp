class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        height(root,diameter);
        return diameter;
    }
    private:
    int height(TreeNode* node, int& diameter){
        if(!node){
            return 0;
        }
        int lh = height(node->left, diameter);
        int lr = height(node->right, diameter);
        diameter = max(diameter,lh+lr);
        return 1 + max(lh,lr);
    }
};