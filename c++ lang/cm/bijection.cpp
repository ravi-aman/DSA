#include <iostream>
#include <math.h>
using namespace std;

double f(int x)
{
    return x * x * x - 2 * x + 5;
}

void bijection(double a, double b, double tol)
{

    if (f(a) * f(b) >= 0)
    {
        cout<<"you have not assument right ";
    };
    double c=a;
    int i=0;
    while(b-a>=tol){
        c=(a+b)/2;
        if(f(c)==0){
            cout<<"root is "<<c;
        }
        else if(f(c)*f(a)<=0){
            b=c;
        }else{
            a=c;
        }
        i++;
    }
}
int main()
{
}
