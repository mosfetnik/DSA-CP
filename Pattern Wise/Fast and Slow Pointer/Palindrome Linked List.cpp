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
        if (!head || !head->next)
            return true;

        // Step 1: Find the middle of the linked list
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse the second half of the linked list
        ListNode* prev = NULL;
        ListNode* current = slow;
        while (current) {
            ListNode* next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        // Step 3: Compare the first half with the reversed second half
        ListNode* first_half = head;
        ListNode* second_half = prev;
        while (second_half) {
            if (first_half->val != second_half->val) {
                return false;
            }
            first_half = first_half->next;
            second_half = second_half->next;
        }

        // Step 4: Restore the original structure (optional)
        // Reversing the second half back to its original form
        current = prev;
        prev = NULL;
        while (current) {
            ListNode* next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        return true;
    }
};