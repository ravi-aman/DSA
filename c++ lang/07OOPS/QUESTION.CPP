#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class book
{
public:
    string name;
    int price;
    int pages;

    bool countBook(int givenPrice)
    {
        if (price < givenPrice)
        {
            return true;
        }
        else
        {
            return false;
        }
    };
    bool isBookPresent(string title)
    {
        if (title == name)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    book novel;
    novel.name = "aman";
    novel.price = 55;
    novel.pages = 200;
    cout << novel.countBook(5);
    cout << novel.isBookPresent("aman");
    return 0;
    cout<<endl;
    cout<<sizeof(novel);
}