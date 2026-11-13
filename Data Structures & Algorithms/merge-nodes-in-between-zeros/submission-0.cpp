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
        ListNode *sumNode = NULL;
        ListNode *curr = head->next;
        int sum = 0;
        while (curr) {
            if (curr->val == 0) {
                if (!sumNode) {
                    ListNode *temp = new ListNode;
                    sumNode = temp;
                    temp->val = sum;
                    head = sumNode;
                }
                else {
                    ListNode *temp = new ListNode;
                    temp->val = sum;
                    sumNode->next = temp;
                    sumNode = sumNode->next;
                }
                sum = 0;
            }
            sum += curr->val;
            curr = curr->next;
        }
        return head;
    }
};
