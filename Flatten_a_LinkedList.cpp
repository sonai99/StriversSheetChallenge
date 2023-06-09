/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */

Node *mergeList(Node *a, Node *b)
{
    Node *temp = new Node(-1);
    Node *res = temp;
    if (!a)
        return b;
    if (!b)
        return a;
    while (a && b)
    {
        if (a->data < b->data)
        {
            temp->child = a;
            temp = temp->child;
            a = a->child;
        }
        else
        {
            temp->child = b;
            temp = temp->child;
            b = b->child;
        }
    }
    if (a)
        temp->child = a;
    else
        temp->child = b;

    return res->child;
}
Node *flattenLinkedList(Node *head)
{
    // Write your code here
    if (!head)
        return head;
    Node *down = head;
    Node *right = head->next;
    down->next = NULL;
    right = flattenLinkedList(right);

    Node *ans = mergeList(down, right);
    return ans;
}
