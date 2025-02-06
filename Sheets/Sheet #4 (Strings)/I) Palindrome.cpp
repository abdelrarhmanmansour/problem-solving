//  Palindrome

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string result =s;
    int flag=-1;
    for(int i=0; i<s.size(); i++)
    {
        if(result[i]==s[s.size()-1-i])
        {
            flag=i;
        }
        else
        {
            flag=-1;
            break;
        }
    }
    if(flag!=-1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}