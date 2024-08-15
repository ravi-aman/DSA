#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(5);
    v.push_back(8);
    v.push_back(3);
    v.push_back(0);
    v.push_back(1);
    v.push_back(3);
    v.push_back(8);
    v.push_back(2);

int x=3;
int index=-1;
    for (int i = v.size(); i > 0 ; i--)
    {
        if(v[i]==x){
            index=i;
            break;
        }
    }
    printf("%d",index);
    return 0;
}