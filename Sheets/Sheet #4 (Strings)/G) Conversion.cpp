//  Conversion

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
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==',')
        {
            s[i]=' ';
        }
        else if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]+=32;
        }
        else
        {
            s[i]-=32;
        }
    }
    cout << s;
}