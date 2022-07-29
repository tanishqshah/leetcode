/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if(!root) return 0;
        queue<Node*> q; q.push(root); int count=0;
        while(!q.empty()){
            count++; int n=q.size();
            for(int i=0; i<n; i++){
               auto x=q.front(); q.pop();
               for(auto y: x->children){
                    if(y) q.push(y);
                } 
            }
            
        }
        return count;
    }
};