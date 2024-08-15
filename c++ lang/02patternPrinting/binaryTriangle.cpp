#include <iostream>
using namespace std;
int main()
{
    int a;
    printf("enter side : ");
    cin >> a;
    int k = 0;
    cout << "Binary triangle    ......";
    for (int i = 0; i <= a; i++)
    {
        if (i % 2 == 0)
            k = 0;
        else
            k = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << k << " ";
            // fliping
            if (k == 0)
                k = 1;
            else
                k = 0;
        }
        cout << "\n";
    }
    cout << "Methode 2 for Binary triangle    ......";
    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
                cout << 0;
            else
                cout << 1;
        }
        cout << "\n";
    }
    return 0;
}