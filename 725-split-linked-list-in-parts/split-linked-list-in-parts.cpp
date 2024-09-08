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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k);

        // get total size of linked list
        int size = 0;
        ListNode* current = head;
        while (current != nullptr) {
            size++;
            current = current->next;
        }

        // minimum size for the k parts
        int splitSize = size / k;

        // Remaining nodes after splitting the k parts evenly.
        // These will be distributed to the first (size % k) nodes
        int numRemainingParts = size % k;

        current = head;
        ListNode* prev = current;
        for (int i = 0; i < k; i++) {
            // create the i-th part
            ListNode* newPart = current;
            // calculate size of i-th part
            int currentSize = splitSize;
            if (numRemainingParts > 0) {
                numRemainingParts--;
                currentSize++;
            }

            // traverse to end of new part
            int j = 0;
            while (j < currentSize) {
                prev = current;
                if (current != nullptr) {
                    current = current->next;
                }
                j++;
            }

            // cut off the rest of linked list
            if (prev != nullptr) {
                prev->next = nullptr;
            }

            ans[i] = newPart;
        }

        return ans;
    }
};