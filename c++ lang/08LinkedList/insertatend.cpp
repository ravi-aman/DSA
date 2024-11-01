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

class ll
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    void inserttEnd(int data)
    {
        cin >> data;
        Node *temp = new Node(data);
        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    void display()
    {
        Node *temp;
        temp = head;
        while (temp->next != NULL)
        {
            cout << temp->data;
            temp->next = temp;
        }
    }
};
int main()
{
    ll l;
    l.inserttEnd(10);
    l.inserttEnd(56);
    cout << "inserted";
    l.display();

    cout << "finished";
}