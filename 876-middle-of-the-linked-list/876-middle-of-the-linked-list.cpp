class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* ans=head;
        // ans->next=head;
        int count=0;
        while(head)
        {
            // ans=ans->next;
            head=head->next;
            if(head==NULL)
                break;
            head=head->next;
            ans=ans->next;
            
        }
        return ans;
        
    }
};