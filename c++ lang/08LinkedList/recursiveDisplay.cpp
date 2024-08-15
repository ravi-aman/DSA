#include <iostream>
#include <bits/stdc++.h>
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



void recursiveDisplay(Node* l1){
    Node *temp= l1;
    if (temp==NULL) return;
    temp =temp->next;
    cout<<temp->value<<" ";
    recursiveDisplay(temp);
    
}
int main()
{
    Node l1(1);
    Node l2(2);
    Node l3(3);
    Node l4(4);

    l1.next = &l2;
    l2.next = &l3;
    l3.next = &l4;

    Node *head = &l1;

    recursiveDisplay(&l1);

    return 0;
}