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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {

        ListNode *temp = head;
        int len = 0;
        while (temp != NULL)
        {
            len++;
            temp = temp->next;
        }

        int end = len - n + 1;

        if (end == 1)
        {
            return head->next;
        }
        else
        {

            ListNode *temp2 = head;

            for (int i = 1; i < end - 1; i++)
            {

                temp2 = temp2->next;
            }
            temp2->next = temp2->next->next;
        }
        return head;
    }
};