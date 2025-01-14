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
        this->next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;
    Node *tail;

    LinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    void insertEnd(int data)
    {
        Node *temp = new Node(data);
        if (head == nullptr && tail == nullptr)
        {
            head = temp;
            tail = head;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
    void printLL2()
    {
        Node *current = head;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
    void printLL(Node *head)
    {
        Node *current = head;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
    void printl()
    {
        Node *temp = head;
        while (1)
        {
            cout << temp->data << " ,";
            if (temp->next == NULL)
                break;

            temp = temp->next;
        }
    }
    void printLLt()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList l;
    l.insertEnd(5);
    l.insertEnd(10);
    l.insertEnd(15);
    // l.printLL(l.head);
    // l.printLLt();
    l.printl();

    return 0;
}