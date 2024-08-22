#include <iostream>
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
        this->next = NULL;
    }
};
class Linkedlist
{
    Node *head;
    Node *tail;

public:
    Linkedlist()
    {
        this->head = NULL;
        this->tail = NULL;
    }
    void add(int value)
    {
        if (head == NULL)
        {
            head = new Node(value);
            tail = head;
        }

        else
        {
            tail->next = new Node(value);
            tail = tail->next;
        }
    }
    void inserAtBegin(int value)
    {
        Node *temp = new Node(value);
        temp->next = head;
        head = temp;   

    };
    void deleteat(){

        
        
    }
    void print()
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
    Linkedlist l;
    l.add(5);
    l.add(6);
    l.add(7);
    l.add(7);
    l.inserAtBegin(45);
    // l.print();
    l.inserAtBegin(45);
}