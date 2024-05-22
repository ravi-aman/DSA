#include <bits/stdc++.h>
using namespace std;
void explainPair()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second;

    // Nested Pairs

    pair<int, pair<int, int>> p = {1, {2, 4}};
    cout << p.first << " " << p.second.first << " " << p.second.second;
    // Array pairs

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {4, 5}};

    cout<<arr[1].second;
}

int main()
{
    ;

    return 0;
}