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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head->next == NULL && n == 1) return NULL;
        ListNode* curr = head;
        int i = 0;
        if (n == 1) {
            while (curr->next->next != NULL) {
                curr = curr->next;
            }
            curr->next = NULL;
            return head;
        }
        while (curr != NULL) {
            i ++;
            curr = curr->next;
        }
        curr = head;
        for (int x = 0; x < i - n - 1; x++) {
            curr = curr->next;
        }
        if (i - n == 0) return head->next;
        curr->next = curr->next->next;
        return head;
    }
};
