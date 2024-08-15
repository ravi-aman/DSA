#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class bike
{
public:
    int tyreSize;
    // default constructor
    bike(int tryeSize)
    {
        this->tyreSize=tyreSize;
        cout<<"constructor call hua he ";
    }
};

int main()
{
    bike tvs(5);
    cout<<tvs.tyreSize;
    return 0;
}