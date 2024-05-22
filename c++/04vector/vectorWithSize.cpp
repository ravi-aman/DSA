#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(5,7); //we have given the size of 5 and each value is set to the 7
    cout << "size is " << v.size() << "\n";
    cout << "capacity is " << v.capacity() << "\n";


cout<<v[4];
    return 0;
}