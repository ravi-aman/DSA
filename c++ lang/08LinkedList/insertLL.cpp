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
    }

    void insertAtEnd(int data)
    {
        Node *temp = new Node(data);
        if (head == NULL && tail == NULL)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    void inserttIndex()
    {
    
    
        }
    friend void display(LinkedList &L);
};

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
    ll.insertAtEnd(78);
    display(ll);
    return 0;
}