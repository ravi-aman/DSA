#include <iostream>
using namespace std;
int f(int fact){
    int product=1;
    for (int i = 0; i<fact; i++)
    {
        product=(fact-i)*product;//1
    }
    return product;
}


int combination(int n ,int r){
    int combi = f(n)/(f(r)*f(n-r));
}
int permutation(int n ,int r){
    int permu = f(n)/(f(r)*f(n-r));
}
int main()
{
    int n;
    printf("enter n : ");
    cin >> n;
    int r;
    printf("enter r : ");
    cin >> r;

    cout<<combination(n,r)<<endl;
    cout<<permutation(n,r)<<endl;

    return 0 ;
}