#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};


Node *convertArr2LL(vector<int> &arr)
{

    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
Node *removeNnodeFromEnd(Node *head, int k)
{
    if (head == NULL && head == NULL)
    {
        return NULL;
    }

    Node *fast = head;
    Node *slow = head;

    for (int i = 0; i < k; i++)
    {
        fast = fast->next;
    }

    if (fast == NULL)
    {
        return head;
    }

    while (fast->next != NULL)
    {
        slow - slow->next;
        fast = fast->next;
    }
    Node *delNode = slow->next;
    slow->next = slow->next->next;
    free(delNode);
    return head;
}
void print(Node *head)
{

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    vector<int> arr = {20, 34, 1, 45, 56, 3};
    Node *head = convertArr2LL(arr);
    // head = deleteHead(head);
    // head = deleteTail(head);
    // head= deleteKelement(head, 2);
    // head= insertBeforHead(head, 2);
    head = removeNnodeFromEnd(head, 3);
    print(head);
    return 0;
}