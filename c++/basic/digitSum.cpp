#include <iostream>
using namespace std;
int main()
{
    int x = 455675;
    int sum = 0;

    while (x > 0)
    {
        x/=10;
        sum=sum+(x%10);
    }
    printf("%d",sum);

    return 0;
}