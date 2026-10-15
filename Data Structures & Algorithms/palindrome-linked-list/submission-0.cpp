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
    bool isPalindrome(ListNode* head) {
        if (head == NULL) return true;
        if (head->next == NULL) return true;
        ListNode *curr = head;
        vector<int> vals;
        while (curr != NULL) {
            vals.push_back(curr->val);
            curr = curr->next;
        }
        int n = vals.size();
        for (int i = 0; i < n / 2; i++) if (vals[i] != vals[n - i - 1]) return false;
        return true;
    }
};