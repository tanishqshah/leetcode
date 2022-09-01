class Solution {
    
    int DFS(TreeNode* node , int maxVal){
        if(node == NULL){
            return 0;
        }
        
        int a = DFS(node -> left ,  max(maxVal ,node -> val));
        int b = DFS(node -> right , max(maxVal ,node -> val));
        return ( (node -> val ) >= maxVal) + a + b;
    }
    
    
public:
    int goodNodes(TreeNode* root) {
        int ans = DFS(root , -1e5);
        return ans;
    }
};