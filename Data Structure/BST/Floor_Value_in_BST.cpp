

int floor_value(Node *root, int x)
{

    int floor = -1;

    while (root != NULL)
    {
        if (root->data == x)
        {
            return x;
        }
        if (root->data < x)
        {
            floor = root->data;
            root = root->right;
        }
        else
        {
            floor = root->left;
        }
    }
    return floor;
}