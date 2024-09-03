#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    };
};

class LL
{
public:
    Node *head;
    Node *tail;

    // Constructor to initialize head and tail to NULL
    LL()
    {
        head = NULL;
        tail = NULL;
    }

    void insertAtEnd(int value)
    {
        Node* newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    int value;
    cout << "Enter a value to insert at the end of the linked list: ";
    cin >> value;

    LL l;
    l.insertAtEnd(7);
    l.insertAtEnd(value);
    l.display();

    return 0;
}