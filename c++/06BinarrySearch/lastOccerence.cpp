#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> arr = {1,2,2,2,3,3,3,3,4,4,5,5,9};
    vector<int> arr = {5,8,8,8,8,10};
    int n = arr.size();
    int target = 8;

    int lo = 0;
    int hi = n - 1;
    bool flag = false;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == target){
            if(arr[mid+1]!=target){
                flag =true;
                cout<<mid;
                break;
            }else{
                lo=mid+1;
            }
        }else if (arr[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    return 0;
}