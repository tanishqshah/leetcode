

class Solution {
public:
    bool areEqualVal(TreeNode* n1, TreeNode* n2) {
        if (n1 == nullptr && n2 == nullptr)
            return true;
        else if (n1 != nullptr && n2 != nullptr && n1->val == n2->val)
            return true;
        else
            return false;
    }

    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        stack<pair<TreeNode*, TreeNode*>> st;
        st.push({root1, root2});

        while (!st.empty()) {
            auto temp = st.top();
            st.pop();
            TreeNode* n1 = temp.first;
            TreeNode* n2 = temp.second;
            if (n1 == nullptr && n2 == nullptr)
                continue;
            if (n1 == nullptr || n2 == nullptr || n1->val != n2->val)
                return false;

            if (areEqualVal(n1->left, n2->left) && areEqualVal(n1->right, n2->right)) {
                st.push({n1->left, n2->left});
                st.push({n1->right, n2->right});
            } else if (areEqualVal(n1->left, n2->right) && areEqualVal(n1->right, n2->left)) {
                st.push({n1->left, n2->right});
                st.push({n1->right, n2->left});
            } else {
                return false;
            }
        }

        return true;
    }
};