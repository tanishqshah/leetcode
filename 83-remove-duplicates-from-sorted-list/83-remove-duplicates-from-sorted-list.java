/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        ListNode chk=head;
        ListNode ans=head;
        while(ans!=null && ans.next!=null){
            if(ans.next.val==ans.val){
                ans.next=ans.next.next;
            }
            else{
                ans=ans.next;
            }
        }
        return head;
    }
}