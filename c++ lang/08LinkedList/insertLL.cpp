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

    void insertAtIndex(int data, int index)
    {
        if (index < 0 || index > LinkedList::size)
        {
            cout << "The given index is invalid "<<endl;
            return;
        }
        else if (index == 0)
            insertAtBegin(data);
        else if (index == size)
            insertAtEnd(data);
        else
        {
            Node *t = new Node(data);
            Node *temp = head;
            int count = 0;
            while (count < index - 1)
            {
                temp = temp->next;
                count++;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    friend void display(LinkedList &L);
};

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
    ll.insertAtIndex(45, 2);
    display(ll);
    return 0;
}
