#include<iostream>
using namespace std;
int main()
{
    int num =56789;
    // printf("%d",num/10);
    int count =0;
    while(num>0)
    {
        num=num/10;
        count++;
    }
    printf("%d",count);
    
return 0;
}