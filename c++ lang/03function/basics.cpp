#include <iostream>
using namespace std;
int star(int a)
{
    cout << "this is plus pattern ";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (j == a / 2 + 2 || i == a / 2)
            {
                cout << "* ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
int main()
{
    int b;
    printf("enter side : ");
    cin >> b;
    star(b);
    return 0;
}