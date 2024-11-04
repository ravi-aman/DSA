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
    Node *head;
    Node *tail;
    static int size;
    LinkedList()
    {
        head = tail = NULL;
    }

    void insertAtBegin(int data)
    {
        Node *temp = new Node(data);
        if (head == NULL)
        {
            head = tail = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtEnd(int data)
    {
        Node *temp = new Node(data);
        if (head == NULL)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    friend void display(LinkedList &L);
};

// Define the static member variable
int LinkedList::size = 0;

void display(LinkedList &ll)
{
    Node *temp = ll.head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    cout << "Size of linked list: " << LinkedList::size << endl;
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
    ll.insertAtEnd(78);
    display(ll);
    return 0;
}