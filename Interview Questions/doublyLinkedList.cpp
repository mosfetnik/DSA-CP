#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node *prev;

public:
    Node(int data1, Node *next1, Node *prev1)
    {
        data = data1;
        next = next1;
        prev = prev1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        prev = nullptr;
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
//================================================delete the head of doubly linked list
Node *deleteHead(Node *head)



{

    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }

    Node *prev = head;
    head = head->next;

    head->prev = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
}
// =================================================delete the tail of the linked list=====================
Node *deleteTail(Node *head)
{

    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }

    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }

    Node *newTail = tail->prev;
    newTail->next = nullptr;
    tail->prev = nullptr;
    delete tail;
    return head;
}

//  ============================delete the K element of the node=============================

Node *deleteKelement(Node *head, int k)
{

    if (head == NULL)
    {
        return NULL;
    }

    int cnt = 0;
    Node *kNode = head;
    while (kNode != NULL)
    {
        cnt++;
        if (cnt == k)
            break;
        kNode = kNode->next;
    }

    Node *back = kNode->prev;
    Node *front = kNode->next;

    if (back == NULL && front == NULL)
    {
        return NULL;
    }
    else if (back == NULL)
    {
        deleteHead(head);
    }
    else if (front == NULL)
    {
        deleteTail(head);
    }

    back->next = front;
    front->prev = back;

    kNode->next = nullptr;
    kNode->prev = nullptr;

    delete kNode;
    return head;
}

// ==========================insertation before head in doubly linked list ===================

Node *insertBeforHead(Node *head, int val)
{

    Node *newHead = new Node(val, head, nullptr);

    head->prev = newHead;
    return newHead;
}

Node *insertAtTail(Node *head, int val)
{

    if (head->next == NULL)
    {
        return NULL;
    }

    Node *tail = head;

    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *prev = tail->prev;
    Node *newNode = new Node(val, tail, prev);

    prev->next = newNode;
    tail->prev = newNode;
    return head;
}

// reverse thelinked list


// remove the all occurene in the doublly linked list
Node* deleteAllOccurrences(Node* head, int val) {
    Node* temp = head;

    while (temp != NULL) {
        if (temp->data == val) {
            Node* nextNode = temp->next;

            // If temp is the head of the list
            if (temp == head) {
                head = nextNode;
                if (head != NULL) {
                    head->prev = NULL;
                }
            } else {
                temp->prev->next = nextNode;
                if (nextNode != NULL) {
                    nextNode->prev = temp->prev;
                }
            }

            free(temp);
            temp = nextNode;
        } else {
            temp = temp->next;
        }
    }

    return head;
}
//============================// printing the all element======================================

void print(Node *head)
{

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}


// =================================  reverse node in k group==========================



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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* curr = head;

        while (curr) {
            // Count the number of nodes in the current group
            int count = 0;
            ListNode* node = curr;
            while (node && count < k) {
                node = node->next;
                count++;
            }

            // If the group has less than k nodes, return the head
            if (count < k) {
                return dummy->next;
            }

            // Reverse the group of k nodes
            prev = reverseGroup(prev, curr, k);

            // Move the pointers to the next group
            curr = prev->next;
        }

        return dummy->next;
    }

private:
    ListNode* reverseGroup(ListNode* prev, ListNode* curr, int k) {
        ListNode* last = prev;
        for (int i = 0; i < k; i++) {
            ListNode* next_node = curr->next;
            curr->next = prev->next;
            prev->next = curr;
            curr = next_node;
        }
        last->next = curr;
        return last;
    }
};



// ====================================Main function=========================================================
int main()
{
    vector<int> arr = {20, 34, 1, 45, 56,1, 3};
    Node *head =convertArr2LL(arr);
    // head = deleteHead(head);
    // head = deleteTail(head);
    // head= deleteKelement(head, 2);
    // head= insertBeforHead(head, 2);
    // head = insertAtTail(head, 444);
    head= deleteAllOccurence(head,1);
    print(head);
    return 0;
}