class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return root ;
        queue<Node*> q ;
        q.push(root) ;
        while(!q.empty()){
            int len = q.size() ;
            for(int i=0 ; i<len ; i++){
                Node* temp = q.front() ;
                q.pop() ;
                if(i==len-1)
                    temp->next = NULL ; // If it is last node of level point it to NULL
                else 
                    temp->next = q.front() ;
                if(temp->left) 
                    q.push(temp->left) ;
                if(temp->right)
                    q.push(temp->right) ;
            }
        }
        return root ;
    }
};
