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
void count(Node *head)
{
    int count = 0;
    Node *curr = head;
    while (curr != NULL)
    {
        count++;
        curr = curr->next;
    }
    cout << " Total number of nodes are:  " << count << endl;
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

    count(head);
}