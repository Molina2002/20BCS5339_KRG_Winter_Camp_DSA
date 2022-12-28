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
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
int count(Node *head)
{
    int count = 0;
    Node *curr = head;
    while (curr != NULL)
    {
        count++;
        curr = curr->next;
    }
    cout << " Total number of nodes are:  " << count << endl;
    return count;
}
Node *merge(Node *head1, Node *head2)
{
    Node *curr = head1;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = head2;
    return head1;
}
int main()
{ // LL1
    Node *head1 = new Node(1);
    Node *temp1 = new Node(2);
    Node *temp2 = new Node(3);
    Node *temp3 = new Node(4);
    Node *temp4 = new Node(5);
    head1->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;

    // LL2
    Node *head2 = new Node(6);
    Node *temp5 = new Node(7);
    Node *temp6 = new Node(8);
    Node *temp7 = new Node(9);
    Node *temp8 = new Node(10);
    head2->next = temp5;
    temp5->next = temp6;
    temp6->next = temp7;
    temp7->next = temp8;

    Node *head = merge(head1, head2);
    traverseLL(head);
}