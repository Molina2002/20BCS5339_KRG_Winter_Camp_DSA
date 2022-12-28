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
    return count;
}
Node *DelKthNode(Node *head, int k, int n)
{
    int m = n - k;
    Node *curr = head;
    for (int i = 1; i < m; i++)
    {
        curr = curr->next;
    }
    if (k > 1 && k < n)
    {

        // cout << curr->next->next->data << endl;

        curr->next = curr->next->next;
    }
    else if (k == 1)
    {
        curr->next = NULL;
    }
    else if (k == n)
    {
        head = head->next;
    }
    return head;
}
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
int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    cout << "Enter K" << endl;
    int k = 0;
    cin >> k;
    int n = count(head);
    head = DelKthNode(head, k, n);
    traverseLL(head);
}