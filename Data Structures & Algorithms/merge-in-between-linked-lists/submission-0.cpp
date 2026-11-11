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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *curr = list1;
        int count = 1;
        while (count < a) {
            curr = curr->next;
            count ++;
        }
        ListNode *tem = curr;
        while (count <= b) {
            curr = curr->next;
            count ++;
        }
        ListNode *temp = curr->next;
        tem->next = list2;
        ListNode *sec = list2;
        while (sec->next) {
            sec = sec->next;
        }
        sec->next = temp;
        return list1;
    }
};
