#include <iostream>
using namespace std;
int main()
{
    int x =123;
    // printf("%d\n", x % 10);
    int y = 0; // 900
    while (x <0)
    {
        y = y * 10; // y=900
        // printf("%d",x%10);
        y = (x % 10) + y;
        x /= 10; // 45678
    }
    printf("%d", y);

    return 0;
}