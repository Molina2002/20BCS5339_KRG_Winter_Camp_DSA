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
void common(Node *head1, Node *head2, Node *head3, int m, int n, int k)
{
    int i = 0, j = 0, l = 0;
    Node *curr1 = head1;
    Node *curr2 = head2;
    Node *curr3 = head3;
    while (i < n && j < m && l < k)
    {
        // cout << curr1->data << " ";
        // cout << curr2->data << endl;

        if (curr1->data == curr2->data && curr2->data == curr3->data)
        {
            cout << curr1->data << " ";

            i++;
            j++;
            l++;
            curr1 = curr1->next;
            curr2 = curr2->next;
            curr3 = curr3->next;
        }
        else if (curr1->data < curr2->data && curr1->data < curr3->data)
        {
            // cout << "dwjhd" << endl;

            i++;
            curr1 = curr1->next;
        }
        else if (curr2->data < curr1->data && curr2->data < curr3->data)
        {
            j++;
            curr2 = curr2->next;
        }
        else
        {
            l++;
            curr3 = curr3->next;
        }
    }
}
int main()
{
    // LL1
    Node *head1 = new Node(2);
    Node *temp1 = new Node(7);
    Node *temp2 = new Node(8);
    Node *temp3 = new Node(9);
    Node *temp4 = new Node(11);
    head1->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;

    // LL2
    Node *head2 = new Node(1);
    Node *temp5 = new Node(7);
    Node *temp6 = new Node(8);
    Node *temp7 = new Node(9);
    Node *temp8 = new Node(12);
    head2->next = temp5;
    temp5->next = temp6;
    temp6->next = temp7;
    temp7->next = temp8;

    // LL3
    Node *head3 = new Node(1);
    Node *temp9 = new Node(7);
    Node *temp10 = new Node(8);
    Node *temp11 = new Node(9);
    Node *temp12 = new Node(24);
    head3->next = temp9;
    temp9->next = temp10;
    temp10->next = temp11;
    temp11->next = temp12;
    int n = count(head1);
    int m = count(head2);
    int k = count(head3);

    common(head1, head2, head3, m, n, k);
}
