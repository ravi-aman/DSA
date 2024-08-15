#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for (int i = 0; i < details.size(); i++) {
            if (stoi(details[i].substr(11, 2)) > 60) {
                count++;
            }
        }
        return count;
    }
};
int main()
{
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    a.next = &b;
    b.next = &c;
    c.next = &d;

    // cout << (a.next->next)->val;
    

    Node temp =a;
    while (true){
        cout<<temp.val<<" ";
        if(temp.next==NULL)break;
        temp = *temp.next;
    }
    
    
    // vector<string> details = {"7868190130M7522","5303914400F9211","9273338290F4010"};

    // Solution s;
    // cout<<s.countSeniors(details);

    return 0;
}