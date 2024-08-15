#include <iostream>
using namespace std;
int gdc(int x, int y)
{
    int hcf = 1;
    for (int i = 1; i <= min(x, y); i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}

int main()
{
    int a;
    printf("enter 1st : ");
    cin >> a;

    int b;
    printf("enter 2st : ");
    cin >> b;

    cout << gdc(a, b);
    return 0;
}
