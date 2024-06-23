#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void num(int b, int n)
{
    if (b == n+1)
        return ;
    cout << b <<" ";
    num(b+1,n);
}
// without extra parameter
int print(int n){
    if(n==0)return 0;
    print(n-1);
    cout<<n<<"  ,";
}
int main()
{
    // num(1, 10);
    print(10);
    return 0;
}