/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *removeKthNode(Node *head, int K)
{
    // Write your code here.

    Node *fast = head;
    Node *slow = head;
    if (head == NULL || K == 0)
        return head;
    for (int i = 1; i <= K; i++)
    {
        if (fast == NULL)
            return head;
        fast = fast->next;
    }
    if (fast == NULL)
    {
        Node *todelete = head;
        head = head->next;
        delete todelete;
        return head;
    }
    while (fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    Node *todelete = slow->next;
    slow->next = slow->next->next;
    delete todelete;
    return head;
}
