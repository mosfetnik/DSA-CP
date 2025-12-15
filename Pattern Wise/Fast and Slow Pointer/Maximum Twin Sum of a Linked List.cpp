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
    int pairSum(ListNode* head) {

        vector<int> arr;

        ListNode* curr = head;

        while (curr != NULL) {
            int num = curr->val;
            arr.push_back(num);
            curr = curr->next;
        }

        int n = arr.size();
        int i = 0;
        int j = n - 1;
        int max_sum = 0;
        while (i < j) {
            int curr_sum = arr[i] + arr[j];
            max_sum = max(curr_sum, max_sum);
            i++;
            j--;
        }
        return max_sum;
    }
};