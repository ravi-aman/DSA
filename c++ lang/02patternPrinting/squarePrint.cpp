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
        for (int j = 0; j < a; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout<<j+1 << " ";
        }
        cout << "\n";
    }
    return 0;
}