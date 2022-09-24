class Solution {
public:
    void dfs(TreeNode* root, vector<vector<int>> &ans, vector<int> &ds, int targetSum,int sum){
        //If root is NULL then just return
        if(root==NULL){
            return;
        }
        //If we have reached the leaf node then check for the requirments
        //if the sum obtained from the current path is equal to the target sum
        if(root->left==NULL and root->right==NULL){
            //We have done sum+root->val because we have to also 
            //add the lead node value to the curr sum to check for the 
            //target sum
            if(sum+root->val==targetSum){
                //if the sum is equal then add it to the ans vector
                ds.push_back(root->val);
                ans.push_back(ds);
                ds.pop_back();
                return;
            }
        }
        
        //DFS+Backtracking Step
        //Pushing values to the ds vector
        ds.push_back(root->val);
        //Going towards the left of the node
        dfs(root->left,ans,ds,targetSum,sum+root->val);
        //Going towards the right of the node
        dfs(root->right,ans,ds,targetSum,sum+root->val);
        //Backtracking step:- After checkig towards the right and
        //left of the node popping it from the ds vector
        ds.pop_back();
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        //Vector to store the final ans
        vector<vector<int>> ans;
        //Vector for storing the paths from root to leaf node;
        vector<int> ds;
        dfs(root,ans,ds,targetSum,0);
        return ans;
    }
};