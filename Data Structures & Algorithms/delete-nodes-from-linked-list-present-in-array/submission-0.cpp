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
        ListNode *curr = head;
        int n = nums.size();
        while (curr == head) {
            for (int i = 0; i < n; i++) {
                if (curr->val == nums[i]) {
                    head = head->next;
                }
            }
            curr = curr->next;
        }
        curr = head;
        while (curr->next) {
            bool found = false;
            for (int i = 0; i < n; i++) {
                if (curr->next->val == nums[i]) {
                    curr->next = curr->next->next;
                    found = true;
                }
            }
            if (!found) curr = curr->next;
        }
        return head;
    }
};
