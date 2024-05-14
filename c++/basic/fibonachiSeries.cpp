#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[5];
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < 5; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }

    return 0;
}