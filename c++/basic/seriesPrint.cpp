// 1 -2 3 -4 5 -6.....

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int sum=0;
    int n;
    int a=1;
    printf("enter n : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        int a=(a+(n-1))*(pow((-1),(n-1)));
        cout<<a<<"\n";
        sum=sum+a;
    }
    printf("%d",sum);
    return 0;
}