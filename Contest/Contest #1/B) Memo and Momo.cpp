// Memo and Momo
#include <iostream>
using namespace std;
int main()
{
    long long a,b,k;
    cin >> a >> b >> k;
    if(a%k==0 && b%k==0)
    {
        cout << "Both";
    }
    if(a%k==0 && b%k!=0)
    {
        cout << "Memo";
    }
     if(b%k==0 && a%k!=0)
    {
        cout << "Momo";
    }
     if(a%k!=0 && b%k!=0)
    {
        cout << "No One";
    }
}