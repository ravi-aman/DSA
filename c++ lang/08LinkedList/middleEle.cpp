#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int size(ListNode *head)
{
    ListNode *temp = head;
    int size = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        size++;
    }
    return size / 2;
}

ListNode *middleNode(ListNode *head)
{
    int mid = size(head);
    int count = 0;
    ListNode *temp = head;
    while (count < mid)
    {
        temp = temp->next;
        count++;
    }
    return temp;
}
ListNode *middleNode2(ListNode *head)
{
    int count=0;
    ListNode *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
        count=+2;
    }
    return temp;
}
void display(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    ListNode *a = new ListNode(1);
    ListNode *b = new ListNode(2);
    ListNode *c = new ListNode(3);
    ListNode *d = new ListNode(4);
    ListNode *e = new ListNode(5);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    cout << "Middle Node: " << middleNode(a)->val << endl;
    return 0;
}
