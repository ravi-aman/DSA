#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void display(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
        ;
}

vector<int> merge(vector<int> v1, vector<int> v2)
{
    int n = v1.size();
    int m = v2.size();
    int i = 0;
    int j = 0;
    int k = 0;
    vector<int> v3;
    while (i <= n && j <= m)
    {
        if (v1[i] < v2[j])
        {
            v3[k] = v1[i];
            i++;
        }
        else
        {
            v3[k] = v2[j];
            j++;
        }
        k++;
    }
    // for remaining element

    if (i == n)
    {
        while (j < m - 1)
        {
            v3[k] = v2[j];
            k++;
            j++;
        }
    }
    if (j == m)
    {
        while (i < m - 1)
        {
            v3[k] = v1[i];
            k++;
            i++;
        }
    }
    return v3;
}

int main()
{
    vector<int> nums1;
    nums1.push_back(1);
    nums1.push_back(4);
    nums1.push_back(5);
    nums1.push_back(8);
    display(nums1);
    cout << "\n";

    vector<int> nums2;
    nums1.push_back(2);
    nums1.push_back(3);
    nums1.push_back(6);
    nums1.push_back(7);
    nums1.push_back(10);
    nums1.push_back(12);
    display(nums1);
    cout<< "\n";

    
    vector<int> v = merge(nums1, nums2);
    display(v);
    return 0;
}