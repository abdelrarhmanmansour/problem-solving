// Multiplies
#include <iostream>
using namespace std;
int main()
{
    int a,b,z=0;
    cin >> a >> b;
    if(b>a)
    {
        z=b;
        b=a;
        a=z;
    }
    if(a%b==0)
    {
        cout << "Multiples";
    }
    else
    {
        cout << "No Multiples";
    }
}