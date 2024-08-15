#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

int main()
{
    Node e1(1);
    Node e2(2);
    Node e3(3);
    Node e4(4);
    Node e5(5);
    Node e6(6);
    Node e7(7);
    Node e8(8);

    e1.next = &e2;
    e2.next = &e3;
    e3.next = &e4;
    e4.next = &e5;
    e5.next = &e6;
    e6.next = &e7;
    e7.next = &e8;

    Node *head = &e1;

    while (head != NULL)
    {
        cout << head->value;
        head = head->next;
    }
}
