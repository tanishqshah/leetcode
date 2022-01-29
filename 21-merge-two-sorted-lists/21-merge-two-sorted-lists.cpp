class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *res=new ListNode(-1);
        ListNode *ans=res;
        while(l1!=NULL && l2!=NULL)
        {
            
            if(l1->val >= l2->val)
            {
                ans->next=l2;
                l2=l2->next;
            }
            else{
                ans->next=l1;
                l1=l1->next;
            }
            ans=ans->next;
            
        }
        while(l1!=NULL)
            ans->next=l1,ans=ans->next,l1=l1->next;
        while(l2!=NULL)
            ans->next=l2,ans=ans->next,l2=l2->next;
        return res->next;
        
    }
};