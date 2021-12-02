https://leetcode.com/problems/odd-even-linked-list/

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode * temp=head;
        int count=0;
        
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        if(count<3)
            return head;
        temp=head->next;
        ListNode *odd=head;
        ListNode *even=head->next;
        while(even && even->next)
        {
            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
        }
        odd->next=temp;
        return head;
        
        
    }
};
