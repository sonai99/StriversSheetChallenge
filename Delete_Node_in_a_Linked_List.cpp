
void deleteNode(LinkedListNode<int> *node)
{
    if (node == NULL)
    {
        return;
    }
    node->data = node->next->data;
    LinkedListNode<int> *temp = node->next;
    node->next = temp->next;
    delete temp;
}