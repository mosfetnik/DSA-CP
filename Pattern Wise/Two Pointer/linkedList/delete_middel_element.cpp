#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *deleteMiddle(ListNode *head)
    {
        // If the list has only one node, delete it and return nullptr
        if (head == nullptr || head->next == nullptr)
        {
            return nullptr;
        }

        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *temp = nullptr; // to store the node before slow

        // Find the middle node using slow-fast pointer approach
        while (fast != nullptr && fast->next != nullptr)
        {
            fast = fast->next->next;
            temp = slow;
            slow = slow->next;
        }

        // Remove the middle node
        temp->next = slow->next;
        delete slow;

        return head;
    }
};
