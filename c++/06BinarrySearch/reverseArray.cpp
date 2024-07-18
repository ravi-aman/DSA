#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void display(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
}
void reverse(int l,int r,vector<int>arr){
    if(l>=r)return ;
    swap(arr[l],arr[r]);
    reverse(l+1,r-1,arr);
}
int main()
{
    
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    reverse(1,arr.size()-1,arr);
    display(arr);

    return 0;
}