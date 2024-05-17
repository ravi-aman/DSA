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
            cout<<a;
            //flipping
            if(a==0)a=1;
            else a=0;
        }
        cout<<"\n";
        
    }
    return 0;
}