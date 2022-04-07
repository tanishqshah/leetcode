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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *ans=new ListNode(-1);
        ListNode *add=ans;
        int sum=0;
        while(head!=NULL){
            if(head->val!=0){
                sum=sum+head->val;
            }
            else{
                ListNode *add1=new ListNode(sum);
                add->next=add1;
                add=add->next;
                sum=0;
            }
            head=head->next;
        }
        return ans->next->next;
    }
};