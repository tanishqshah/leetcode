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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans=new ListNode(0);
        ListNode* curr=ans;
        while(list1!=NULL && list2!=NULL){
            if(list1->val > list2->val){
                curr->next=list2;
                curr=curr->next;
                list2=list2->next;
            }
            else{
                curr->next=list1;
                curr=curr->next;
                list1=list1->next;
            }
        }
        while(list2!=NULL){
            curr->next=list2;
            curr=curr->next;
            list2=list2->next;
        }
        while(list1!=NULL){
            curr->next=list1;
            curr=curr->next;
            list1=list1->next;
        }
        return ans->next;
    }
};