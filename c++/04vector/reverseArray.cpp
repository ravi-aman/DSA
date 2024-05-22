#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(8);

    display(v1);
    int n = v1.size();
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        int j = n - 1 - i;
        v2[i] = v1[j];
    }
    display(v2);

    // reverse without using another array
    int i = 0;
    int j = n - 1;
    while (i <= j)

    {

        // swap
        int temp = v1[i];
        v1[i] = v1[j];
        v1[j] = temp;

        i++;
        j--;
    }
    display(v2);
    for (int i = 0, j = n; i <= j; i++, j--)
    {
        int temp = v1[i];
        v1[i] = v1[j];
        v1[j] = temp;
    }

    return 0;
}
