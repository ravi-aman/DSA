#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int pow(int a,int b){
    if(b==1)return a;
    return a*pow(a,b-1);
}
int main(){
    cout<<pow(2,3);
    return 0;
}