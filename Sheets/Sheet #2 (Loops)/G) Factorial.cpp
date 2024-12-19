// Factorial
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t>0)
    {
        long long number;
        cin >> number;
        long long res=1;
        for(int i=number; i>=1; i--)
        {
            res*=i;
        }
        cout << res << endl;
        t--;
    }
}