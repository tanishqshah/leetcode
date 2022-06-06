class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        int sum = 0;
        queue<TreeNode*> que;
        que.push(root);
        
        while(!que.empty())
        {
            sum = 0;
            int size = que.size();
            
            while(size--)
            {
                TreeNode* temp = que.front();
                que.pop();
                sum += temp->val;
                
                if(temp->left) que.push(temp->left);
                if(temp->right) que.push(temp->right);
            }
        }
        
        return sum;
    }
};