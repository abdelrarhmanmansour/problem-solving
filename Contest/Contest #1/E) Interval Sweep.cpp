// Interval Sweep
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    if(a!=0 && b!=0)
    {
        if( a==b|| abs(a-b)<=1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }
}