#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==1||n==0)return 1;

    //recursive call
    return n*fact(n-1);

}
int fib(int n){
    if(n==1)return 1;
    if(n==0)return 0;
    int num =fib(n)+fib(n-1);
    cout<<num;
    return num;
}

int main(){
    cout<<fact(3);
    fib(4);
    return 0;
}