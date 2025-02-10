//  Add

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<exception>
#include<algorithm>
using namespace std;
long long Sum(long long x,long long y)
{
    return x+y;
}
int main()
{
    long long x,y;
    cin >> x >> y;
    long long result = Sum(x,y);
    cout << result;
}