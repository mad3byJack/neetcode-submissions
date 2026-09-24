/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        struct ListNode *fast = head;
        struct ListNode *slow = head;
        if (head == NULL) {
            return false;
        }
        fast = fast->next;
        while (fast != NULL) {
            if (fast == slow) {
                return true;
            }
            fast = fast->next;
            slow = slow->next;
            if (fast != NULL) {
                fast = fast->next;
            }
        }
        return false;
    }
};