#include <iostream>
using namespace std;
struct Node
{
    int data;

    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void traverseLL(Node *head)
{
    if (head == NULL)
    {
        cout << "Linked list in empty" << endl;
    }
    Node *curr = head;
    while (curr != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
Node *delAltNode(Node *head)
{
    Node *curr = head;
    Node *dummy = curr;
    while (curr != NULL && curr->next != NULL)
    {
        curr->next = curr->next->next;

        curr = curr->next;
    }
    return head;
}
int main()
{
    Node *head = new Node(1);
    Node *temp1 = new Node(2);
    Node *temp2 = new Node(3);
    Node *temp3 = new Node(4);
    Node *temp4 = new Node(5);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;
    head = delAltNode(head);
    traverseLL(head);
}
