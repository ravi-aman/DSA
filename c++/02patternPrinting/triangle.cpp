#include <iostream>
using namespace std;
int main()
{
    int a;
    printf("enter side : ");
    cin >> a;

    // int b;
    // printf("enter b : ");
    // cin >> b;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i; j++)
        {

            cout << "* ";
        }
        cout << "\n";
    }
    cout << "Reverse triangle\n";

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <=a-i-1; j++)
        {

            cout << "* ";
        }
        cout << "\n";
    }
 for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i; j++)
        {

            cout<<j << " ";
        }
        cout << "\n";
    }
    cout << "Reverse triangle\n";

    for (int i = 0; i +1< a; i++)
    {
        for (int j = 0; j <a-i-1; j++)
        {

            cout<<2*j+1<< " ";
        }
        cout << "\n";
    }

    return 0;
}