#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

public:
    Node(int data1, int next1, int prev1)
    {

        data = data1;
        next = next1;
        prev = prev1;

    public:
        Node(int data1)
        {

            data = data1;
            next = nullptr;
            prev = nullptr;
        }
    }

    Node *findMiddleOfLL(Node *head)
    {
        int cnt = 0;
        Node *temp = head;

        if (head == NULL || head->next == NULL)
        {
            return NULL;
        }

        while (temp != NULL)
        {
            cnt++;
            temp = temp->next;
        }
        int middle = (cnt / 2) + 1;

        temp = head;
        while (temp != NULL)
        {
            middle = middle - 1;
            if (middle == 0)
            {
                break;
            }
            temp = temp->next;
        }
        retrun temp;
    }
}