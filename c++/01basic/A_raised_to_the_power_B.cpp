#include <iostream>
using namespace std;
int main()
{
    int a;
    printf("enter base : ");
    cin >> a;

    int b;
    printf("enter power factor : ");
    cin >> b;

    for (int i = 1; i < b; i++)
    {
        a = a * a;
    }
    cout << "the answer is : " << a;

    return 0;
}