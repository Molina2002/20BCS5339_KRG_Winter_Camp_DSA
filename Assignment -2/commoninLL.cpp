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
void common(Node *head1, Node *head2, int m, int n)
{
    int i = 0, j = 0;
    Node *curr1 = head1;
    Node *curr2 = head2;
    while (i < n && j < m)
    {
        // cout << curr1->data << " ";
        // cout << curr2->data << endl;

        if (curr1->data == curr2->data)
        {
            cout << curr1->data << " ";

            i++;
            j++;
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        else if (curr1->data < curr2->data)
        {
            // cout << "dwjhd" << endl;

            i++;
            curr1 = curr1->next;
        }
        else if (curr1->data > curr2->data)
        {
            j++;
            curr2 = curr2->next;
        }
    }
}
int main()
{
    // LL1
    Node *head1 = new Node(1);
    Node *temp1 = new Node(2);
    Node *temp2 = new Node(3);
    Node *temp3 = new Node(9);
    Node *temp4 = new Node(11);
    head1->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;

    // LL2
    Node *head2 = new Node(1);
    Node *temp5 = new Node(2);
    Node *temp6 = new Node(3);
    Node *temp7 = new Node(8);
    Node *temp8 = new Node(9);
    head2->next = temp5;
    temp5->next = temp6;
    temp6->next = temp7;
    temp7->next = temp8;

    int n = count(head1);
    int m = count(head2);
    common(head1, head2, m, n);
}