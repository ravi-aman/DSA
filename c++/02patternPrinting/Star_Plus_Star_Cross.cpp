#include <iostream>
using namespace std;
int main()
{
    int a;
    printf("enter side : ");
    cin >> a;
    cout<<"this is plus pattern ";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j ++)
        {
            if (j==a/2+2 || i==a/2)
            {
                cout<<"* ";
            }else{
                cout<<" ";
            }
            
        }
        cout<<"\n";
        
    }
cout<<"this is cross pattern ";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j ++)
        {
            if (i==j||i==(a-j))
            {
                cout<<"* ";
            }else{
                cout<<" ";
            }
            special
        }
        cout<<"\n";
        
    }
    return 0;
}