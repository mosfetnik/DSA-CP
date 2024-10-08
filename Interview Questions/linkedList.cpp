#include <bits/stdc++.h>
using namespace std;

struct Node
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
    };
};

Node *convertArr2LL(vector<int> &arr) // converting the array into the inked list
{
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); ++i)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int lengthOfLL(Node *head) // find the length of the linked list
{

    int cnt = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

void print(Node *head)
{ // printing function in Linked list
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int searchInLL(Node *head, int val) // search the value in the linked list
{

    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == val)
            return 1;
        temp = temp->next;
    }
    return 0;
}

// int deleteInLL(Node *head, int val)
// {
//     while (temp != head)
//     {
//         if (temp->data == val)
//         {
//         }
//     }
// }

Node *deleteLastNode(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    // edge case

    Node *
        temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node *removeKindex(Node *head, int k)
{
    if (head == NULL) return head;
        

    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int cnt = 0;

    Node *temp = head;
    Node *prev = NULL;

    while (temp != NULL)
    {
        cnt++;
        if (k == cnt)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        else{
            prev = temp ;
            temp = temp->next;
        }
    }
    return head;
}

Node *removeKelement(Node *head, int ele)
{
    if (head == NULL) return head;
        

    if (head->data== ele)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
   
    Node *temp = head;
    Node *prev = NULL;

    while (temp != NULL)
    {
       
        if (temp->data == ele)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        else{
            prev = temp ;
            temp = temp->next;
        }
    }
    return head;
}

Node* insertHead(Node* head, int val){


}
int main()
{
    vector<int> arr = {45, 23, 56, 45, 44, 45};
    Node *head = convertArr2LL(arr);
    // head = deleteLastNode(head);
    // head = removeKindex(head,4);
    head = removeKelement(head,45);
    print(head);
    // cout << searchInLL(head,0) <<endl;
    // cout << lengthOfLL(head);
    return 0;
}