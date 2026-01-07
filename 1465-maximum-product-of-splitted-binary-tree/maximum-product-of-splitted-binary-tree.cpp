/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    const int mod=1e9+7;
    long long ans=INT_MIN, total=0;
    int dfs(TreeNode* root){
        if (!root) return 0;
        int sum=root->val+dfs(root->left)+dfs(root->right);
        ans=max(ans, (total-sum)*sum);
        return sum;
    }
    int maxProduct(TreeNode* root) {
        total=dfs(root);
        dfs(root);
    //    cout<<total<<", "<<ans<<endl;
        return ans%mod;
    }
};



auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();