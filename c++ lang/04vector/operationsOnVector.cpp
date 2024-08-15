#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v; // you need not to give size
    v.push_back(6);
    // v.push_back(7);
    v[1] = 1; // wrong way

    v.push_back(8);
    v.push_back(5);
    v.push_back(8);
    v.push_back(5);
    v.push_back(8);
    v.push_back(5);
    v.push_back(8);
    v.push_back(5);
    v.push_back(8);
    v.push_back(5);
    v.push_back(8);
    v.push_back(5);
    v.push_back(8);
    v.push_back(5);
    v.push_back(8);
    v.push_back(5);

    cout << "size is " << v.size() << "\n";
    cout << "capacity is " << v.capacity() << "\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
    }
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout << "size is " << v.size() << "\n";
    cout << "capacity is " << v.capacity() << "\n"; // capicity do not change by capacity
 


    return 0;
}