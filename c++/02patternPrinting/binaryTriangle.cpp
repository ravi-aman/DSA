#include <iostream>
using namespace std;
int main()
{
    int a;
    printf("enter side : ");
    cin >> a;
    int k = 0;
    cout << "floyed triangle    ......";
    for (int i = 0; i <=a; i++)

    {
        if (i % 2 == 0)
            k = 0;
        else
            k = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << k<<" ";
            // fliping
            if (k == 0)
                k = 1;
            else
                k = 0;
        }
        cout << "\n";
    }

    return 0;
}