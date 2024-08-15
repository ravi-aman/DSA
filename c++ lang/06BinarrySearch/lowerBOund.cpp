#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 6, 8, 9, 11, 23, 26, 28, 32};
    int n = arr.size();
    int target = 7;

    int lo = 0;
    int hi = n - 1;
    bool flag = false;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;

        if (arr[mid] == target)
        {
            cout << arr[mid - 1];
            flag = true;
            break;
        }
        else if (arr[mid] < target)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    if(flag == false)cout<<arr[hi];
    return 0;
}