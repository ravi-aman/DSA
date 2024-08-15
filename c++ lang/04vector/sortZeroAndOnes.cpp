#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int display(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }
}

void tsort(vector<int> &v) // 010110
{
    int k = 0;
    int i = 0;
    while (i < v.size()) //
    {
        if (v[i] != v[k])
        {
            int temp = v[k];
            v[k] = v[i]; //
            v[i] = temp; //
            k++;
        }
        i++; // 0,1,2
    }
}

void tpsort(vector<int> &v) // 010110
{
    int i = 0;
    int j = v.size();
    while (i < j) //
    {
        if (v[j] == 1)
            j--;
        if (v[i] == 0)
            i++;
        if (i<j)break;        
        if (v[i] == 1 && v[j] == 0)
        {
            int temp = v[j];
            v[j] = v[i]; //
            v[i] = temp; //
            i++;
            j--;
        }
        i++; // 0,1,2
    }
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    display(v);
    cout << endl;
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            count++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i < count)
        {
            v.at(i) = 0;
        }
        else
        {
            v.at(i) = 1;
        }
    }
    cout << endl;

    display(v);
    cout << endl;
    cout << endl;

    tpsort(v);
    cout << "here";
    display(v);
    cout << endl;
    cout << endl;
    tsort(v);
    display(v);

    return 0;
}