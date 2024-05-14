#include <iostream>
using namespace std;
int main()
{
    int product = 1;
    int n;
    cout << "enter the number";
    cin >> n;
    for (int j = n; j > 0; j--)
    {
        for (int i = j; i > 0; i--)
        {
            product *= i;
        }
        cout << product<<"\n";
        product=1;
    }
    return 0;
}