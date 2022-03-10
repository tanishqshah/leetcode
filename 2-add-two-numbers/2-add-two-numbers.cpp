class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode *temp=NULL,*start=NULL;
        while(l1 || l2 || carry)
        {
            int num=0;
            num=num+carry;
            if(l1)
                num=num+l1->val,l1=l1->next;
            if(l2)
                num=num+l2->val,l2=l2->next;
            ListNode *mod=new ListNode(num%10);
            if(temp)
                temp->next=mod,temp=temp->next;
            else
                temp=mod,start=mod;
            carry=num/10;
        }
        return start;
        
    }
};