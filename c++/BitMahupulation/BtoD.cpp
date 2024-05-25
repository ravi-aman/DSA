#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

string DtoB(int n) {
    string str = "";
    while (n != 0) {
        if (n % 2 == 0) {
            str = str + "0";
        } else {
            str = str + "1";
        }
        n /= 2; // Perform integer division
    }
    reverse(str.begin(), str.end());
    return str;
}

int BtoD(string b){
    int num=0;
    int power =1;
    for (int i = b.length()-1; i >=0 ; i--)
    {
        if (b[i]=='1'){
            num = num +power;
        };
        power *= 2;
    }
    return num;
}
int main() {
    cout << DtoB(678) << endl;
    cout<<BtoD(DtoB(678))<<endl;
    return 0;
}
