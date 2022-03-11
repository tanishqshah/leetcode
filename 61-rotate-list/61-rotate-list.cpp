class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || head->next==NULL || k==0){
            return head;
        }
        int len=1;
        ListNode* n1;
        n1=head;
        ListNode *tail=head;
        while(tail->next){
            tail=tail->next;
            len++;
        }
        tail->next=head;
        ListNode *curr=head;
        tail=head;
        int x=(abs(len-k))%len;
        for(int i=0;i<len-(k%len)-1;i++){
            tail=tail->next;
            curr=curr->next;
        }
        head=curr->next;
        curr->next=NULL;
        return head;
        
    }
};