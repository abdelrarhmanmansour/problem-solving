//  Subsequence String

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    string s= "hello";
    string t;
    cin >> t;
    int x=0;
    for(int i=0; i<t.size()&&x<5; i++)
    {
        if(t[i]==s[x])
        {
            x++;
        }
    }
    if(x==5)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}