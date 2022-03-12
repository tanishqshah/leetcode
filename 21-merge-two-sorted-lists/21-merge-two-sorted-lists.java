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
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        ListNode ans=new ListNode(-1);
        ListNode edit=ans;
        while(l1!=null && l2!=null){
            if(l1.val > l2.val){
                edit.next=l2;
                l2=l2.next;
            }
            else{
                edit.next=l1;
                l1=l1.next;
            }
            edit=edit.next;
        }
        if(l1!=null){
            edit.next=l1;
        }
        if(l2!=null){
            edit.next=l2;
        }
        return ans.next;
    }
}