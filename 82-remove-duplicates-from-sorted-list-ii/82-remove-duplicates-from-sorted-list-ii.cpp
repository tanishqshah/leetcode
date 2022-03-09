class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *last = new ListNode(0), *new_head = last;
        
        while (head) {
            
            if (head->next && head->val == head->next->val) {
                while (head->next && head->val == head->next->val)
                    head = head->next;
            }
            
            else {
                last->next = head;
                last = head;
            }
            
            head = head->next;
        }
        
        last->next = NULL;
        return new_head->next;
    }
};