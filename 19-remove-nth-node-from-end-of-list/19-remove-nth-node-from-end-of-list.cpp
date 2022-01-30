class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        // ans->next=head;
        int count=0;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        temp=head;
        if(count==n)
            return head->next;
        for(int i=1;i<count-n;i++)
            temp=temp->next;
        temp->next=temp->next->next;
        
        return head;
    }
};