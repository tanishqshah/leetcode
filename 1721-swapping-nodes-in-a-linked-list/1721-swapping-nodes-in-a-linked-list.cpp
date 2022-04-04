/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *curr=head;
        int count=0;
        while(curr){
            curr=curr->next;
            count++;
        }
        int l1=0,l2=0;
        curr=head;
        for(int i=0;i<count;i++){
            if(i==k-1){
                l1=curr->val;
            }
            if(i==count-k){
                l2=curr->val;
            }
            curr=curr->next;
        }
        curr=head;
        for(int i=0;i<count;i++){
            if(i==k-1){
                curr->val=l2;
            }
            if(i==count-k){
                curr->val=l1;
            }
            curr=curr->next;
        }
        return head;
    }
};