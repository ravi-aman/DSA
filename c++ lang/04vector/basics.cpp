#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v; // you need not to give size
    v.push_back(6);
    // v.push_back(7);
    v[1] = 1;//wrong way 

    v.push_back(8);
    v.push_back(5);

    // if you want to update / access then you should use square bracket

    cout << v[0] << "\n";
    cout << v[1] << "\n";
    cout << v[2] << "\n";

    return 0;
}