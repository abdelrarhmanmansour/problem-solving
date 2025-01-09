//  Sum Digits

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        int x =s[i]-'0';
        sum+=x;
    }
    cout << sum;
}