#include <iostream>
using namespace std;
int main()
{
    int a;
    printf("enter side : ");
    cin >> a;
    int k = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            k++;

            cout << k<<" ";
        }
        cout << "\n";
    }
    return 0;
}