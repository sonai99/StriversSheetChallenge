/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
    int carry = 0;
    Node *num3 = new Node();
    Node *head = num3;

    while (num1 && num2)
    {
        int value = num1->data + num2->data + carry;
        carry = value / 10;
        num3->next = new Node(value % 10);
        num1 = num1->next;
        num2 = num2->next;
        num3 = num3->next;
    }

    while (num1)
    {
        int value = num1->data + carry;
        carry = value / 10;
        num3->next = new Node(value % 10);
        num1 = num1->next;
        num3 = num3->next;
    }

    while (num2)
    {
        int value = num2->data + carry;
        carry = value / 10;
        num3->next = new Node(value % 10);
        num2 = num2->next;
        num3 = num3->next;
    }
    if (carry)
    {
        num3->next = new Node(carry);
    }
    return head->next;
}
