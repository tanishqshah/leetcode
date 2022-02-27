class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        unsigned long long int ans=0;
        queue<pair<TreeNode*,unsigned long long int>> q;
        q.push({root,0});
        while(!q.empty()){
            unsigned long long int s=q.size();
            unsigned long long int l=q.front().second,r=0;
            while(s--){
                TreeNode* temp=q.front().first;
                unsigned long long int node=q.front().second;
                q.pop();
                if(temp->left)
                    q.push({temp->left,2*node+1});
                if(temp->right)
                    q.push({temp->right,2*node+2});
                if(r<node)
                    r=node;
            }
            if(ans<r-l+1)
                ans=r-l+1;
        }
        return ans;
    }
};