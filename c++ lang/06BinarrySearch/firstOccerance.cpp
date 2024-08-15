#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1,2,2,2,3,3,3,3,4,4,5,5,9};
    int n = arr.size();
    int target = 3;

    int lo = 0;
    int hi = n - 1;
    bool flag = false;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == target){
            if(arr[mid-1]!=target){
                flag =true;
                cout<<mid;
                break;
            }else{
                hi=mid-1;
            }
        }else if (arr[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    if(flag == false)cout<<arr[lo+1];
    return 0;
}