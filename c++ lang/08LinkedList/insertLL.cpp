#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data) : data(data), next(NULL) {}
};

class LinkedList
{
public:
    static Node *head;
    Node *tail;
    LinkedList()
    {
        head = tail = NULL;
    }

    void insertAtBegin(int data)
    {
        Node *temp = new Node(data);
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
    }

    friend void display(LinkedList &L);
};

Node *LinkedList::head = NULL;

void display(LinkedList &ll)
{
    Node *temp = ll.head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    LinkedList ll;
    display(ll);
    ll.insertAtBegin(33);
    ll.insertAtBegin(35);
    ll.insertAtBegin(36);
    ll.insertAtBegin(336);
    display(ll);
    return 0;
}