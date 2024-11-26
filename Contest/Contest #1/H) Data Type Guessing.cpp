// Data Type Guessing
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double n,k,a;
    cin >> n>>k>>a;
    double res = (n*k)/a;
    long long res1 = (n*k)/a;
    double x= res-res1;
    if(x>0)
    {
        cout << "double";
    }
    else if(res>2147483647)
    {
        cout << "long long";
    }
    else
    {
        cout << "int";
    }
}