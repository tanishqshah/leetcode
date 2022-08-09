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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp=head;
        ListNode* curr=head;
        ListNode* prev=head;
        ListNode* ans;
        if(temp && temp->next){
            ans=temp->next;
        }
        else
            ans=head;
        if(temp && temp->next){
            curr=temp->next->next;
            prev=temp->next;
            prev->next=temp;
            temp->next=curr;
            temp->next=swapPairs(curr);
        }
        
        
        return ans;
    }
};