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
    ListNode* removeElements(ListNode* head, int target) {
        ListNode* temp=new ListNode(1);
        ListNode* curr=temp;
        while(head!=NULL){
            if(head->val==target){
                head=head->next;
            }
            else{
                temp->next=head;
                temp=temp->next;
                head=head->next;
            }
        }
        temp->next=head;
        return curr->next;
    }
};