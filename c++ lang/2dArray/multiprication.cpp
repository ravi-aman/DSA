#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cout << "enterthe row of 1st matrix (m) : ";
    cin >> m;
    int n;
    cout << "enter the column of 1st matrix (n) : ";
    cin >> n;
    int p;
    cout << "enter the row of 1st matrix (p) : ";
    cin >> p;
    int q;
    cout << "enter the column of 1st matrix (q)";
    cin >> q;

    if (n == p)
    {
        int a[m][n];
        cout << "enter element of 1st matrix : \n";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        int b[p][q];
        cout << "enter element of 1st matrix : \n";
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> b[i][j];
            }
        }
        // resultant matrix
        int res[m][p];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < p; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    res[m][p] = a[m][k] * b[k][p];
                    cout<<res[m][p];
                }
            }
        }
    }
    else
    {
        cout << "the matrix can not be multiplited";
    }
    return 0;
} 