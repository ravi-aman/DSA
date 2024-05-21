#include <iostream>
using namespace std;
int f(int fact)
{
    int product = 1;
    for (int i = 0; i < fact; i++)
    {
        product = (fact - i) * product; // 1
    }
    return product;
}

int combination(int n, int r)
{
    int combi = f(n) / (f(r) * f(n - r));
    return combi;
}
int permutation(int n, int r)
{
    int permu = f(n) / (f(r) * f(n - r));
}
int main()
{
    int a;
    printf("enter length : ");
    cin >> a;
    // cout<<combination(n,r)<<endl;
    // cout<<permutation(n,r)<<endl;

    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }

    // optimum methode

    for (int i = 0; i <= a; i++)
    {
        int curr = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << curr<<" ";
            int curr = curr * (i - j) / (j + 1);
        }
        cout << endl;
    }

    return 0;
}