
//   Definition for singly-linked list.
//   struct ListNode {
//       int val;
//       ListNode *next;
//       ListNode() : val(0), next(nullptr) {}
//       ListNode(int x) : val(x), next(nullptr) {}
//   };

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* tmp=head;
        int count=0;
        while(tmp){
            count++;
            tmp=tmp->next;
        }
        if(n==count){
            return head->next;
        }
        tmp=head;
        for(int i=0;i<count-n-1;i++){
            tmp=tmp->next;
        }
        tmp->next=tmp->next->next;
        return head;
    }
};