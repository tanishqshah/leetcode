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
    ListNode* reverseList(ListNode* head) {
        ListNode* currptr=head;
        ListNode* nextptr=head;
        ListNode* currHead=nullptr;
        while(head){
            nextptr = head->next;
            currptr = head;
            head = head->next;
            currptr->next = currHead;
            currHead =currptr;
        }
        return currptr;
    }
};