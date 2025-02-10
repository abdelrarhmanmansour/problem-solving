//  Equation
// using built_in function[POW];

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<exception>
#include<algorithm>
using namespace std;
long long Equation(int x,int n)
{
    long long res=0;
    for(int i=2; i<=n; i+=2)
    {
        res+=pow(x,i);
    }
    return res;
}
int main()
{
    int x,n;
    cin >> x >> n;
    cout << Equation(x,n);
}
// #######################################################

// not using built_in function:

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<exception>
#include<algorithm>
using namespace std;
long long Equation(int x,int n)
{
    long long sum=0;
    for(int i=2; i<=n; i+=2)
    {
        long long mul=1;
        int j=i;
        while(j--)
        {
            mul*=x;
        }
        sum+=mul;
    }
    return sum;
}
int main()
{
    int x,n;
    cin >> x >> n;
    cout << Equation(x,n);
}