#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
    }
};

class LinkedkList
{
    Node *head;
    Node *tail;
    LinkedkList()
    {
        head = tail = NULL;
    }

    void insert(int data)
    {
        Node *temp = new Node(data);
        
    }
    friend void display(LinkedkList &l);
};

void display(LinkedkList &l)
{
    Node *temp = l.head;
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
}

int main()
{

    return 0;
}