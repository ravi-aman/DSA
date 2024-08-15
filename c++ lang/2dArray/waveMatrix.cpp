#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void display(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    display(arr);

    for (int i = 0; i < 3; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int j = 3 - 1; j >=0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
cout<<endl;
cout<<endl;
cout<<endl;
    for (int i = 3-1; i>=0; i--)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int j = 3 - 1; j >=0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    return 0;
}