#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int data, Node *next = nullptr)
    {
        this->data = data;
        this->next = next;
    }
};

bool detectCycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;       // move slow by 1
        fast = fast->next->next; // move fast by 2

        if (slow == fast)
            return true; // cycle detected
    }

    return false; // no cycle
}

int main()
{
    // Example: Creating a cycle list
    Node *node1 = new Node(1);
    Node *node2 = new Node(2);
    Node *node3 = new Node(3);
    Node *node4 = new Node(4);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node2; // cycle here

    if (detectCycle(node1))
        cout << "Cycle detected!" << endl;
    else
        cout << "No cycle." << endl;

    return 0;
}
