#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int print(int n){
    if(n==0)return 0;

    cout<<n<<"  ,";
    print(n-1);
}
int main(){
    print(10);
      
    return 0;
}