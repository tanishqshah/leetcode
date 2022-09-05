class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(root==NULL)
            return ans;
        queue<Node *> q;
        
        q.push(root);
        while(!q.empty())
        {
            vector<int> v;
             int len=q.size();
            while(len--)
            {
            Node *temp= q.front();
            q.pop();
            v.push_back(temp->val);
            for(auto x: temp->children)
            {
                if(x!=NULL)
                q.push(x);
            }
            }
            ans.push_back(v);
        }
       return ans; 
    }
};