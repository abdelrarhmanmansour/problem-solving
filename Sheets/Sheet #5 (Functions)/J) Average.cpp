
//  Average

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<exception>
#include <algorithm>
#include <iomanip>
using namespace std;
double Average_Array(int n)
{
    double mean=0;
    for(int i=0; i<n; i++)
    {
        double number;
        cin >> number;
        mean+=number;
    }
    return mean/n;
}
int main()
{
    int n;
    cin >> n;
    cout << fixed << setprecision(8) << Average_Array(n);
}