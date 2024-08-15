#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> v(5);
    // cout << "size is " << v.size() << "\n";
    // cout << "capacity is " << v.capacity() << "\n";

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cin >> v[i];
    // };
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // cout << v[4];

    // taking input when size of vector is not given
    vector<int> vec;
  
    for (int i = 0; i < 7; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    };
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }

    return 0;
}