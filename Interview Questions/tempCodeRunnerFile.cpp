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