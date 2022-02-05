class Solution {  // This is Most Basic Approach
public:
       ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
           ListNode* head=NULL;  
          if(!l1) return l2;
          if(!l2) return l1;
		  
          if(l1->val<=l2->val) {  head=l1; l1=l1->next;  }
          else { head=l2;  l2=l2->next;  }
		  
          ListNode *curr=head;
          while(l1 && l2)
          {    if(l1->val<=l2->val){  curr->next=l1;  l1=l1->next;  }
               else{  curr->next=l2;  l2=l2->next;  }
               curr=curr->next;
          }
        
        if(l1) curr->next=l1;
        if(l2) curr->next=l2; 
        return head;
      }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        ListNode* ans=lists[0];
        for(int i=1;i<lists.size();i++)
            ans=mergeTwoLists(ans,lists[i]);
      
        return ans;
        
    }
};