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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* answer=new ListNode(-1);
        ListNode* result=answer;
        unordered_map<int,int>mp;
        for(auto i : nums)
            mp[i]++;

        while(head){
            if(mp[head->val]==0){
                answer->next=new ListNode(head->val);
                answer=answer->next;
            }
            head=head->next;
        }
        return result->next;

        
        
    }
};