class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(!head) return head;
        if(head->next==NULL) return head;
        multiset<pair<int,ListNode*>> m;
        while(head!=NULL){
            m.insert({head->val,head});
            head=head->next;
        }
        pair<int,ListNode*> p=*m.begin();
        head=p.second;
        ListNode *root=head;
        m.erase(m.begin());
        while(m.size()>1){
            pair<int,ListNode*> k=*m.begin();
            root->next=k.second;
            root=root->next;
            m.erase(m.begin());
        }
        pair<int,ListNode*> k=*m.begin();
        root->next=k.second;
        root->next->next=NULL;
        return head;
    }
};