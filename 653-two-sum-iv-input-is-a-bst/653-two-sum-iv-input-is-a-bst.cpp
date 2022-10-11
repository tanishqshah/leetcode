class Solution {
public:
    void check(vector<int>&ans,TreeNode* root){
        if(root==NULL)
            return;
        check(ans,root->left);
        ans.push_back(root->val);
        check(ans,root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>ans;
        check(ans,root);
        int i=0;
        int j=ans.size()-1;
        while(i<j){
            int mid=i+j;
            mid=mid/2;
            if(ans[i]+ans[j]>k){
                j--;
            }
            else if(ans[i]+ans[j]<k){
                i++;
            }
            else
                return true;
        }
        return false;
    }
};