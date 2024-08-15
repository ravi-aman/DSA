#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if (n == 0) return n;
    return n + sum(n - 1);
}
int main()
{
    cout << sum(3);

    return 0;
}