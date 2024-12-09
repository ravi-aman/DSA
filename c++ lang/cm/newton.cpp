#include <iostream>
#include <math.h>
using namespace std;

double f(double x)
{
    return x * x * x - 2 * x + 5;
}
double d(double x)
{
    return 3 * x * x - 2;
}
void newton(double x, double tol)
{
    double h = f(x) / d(x);
    int i=0;
    while()
}
int main()
{
}
