//  I Love strings

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        string s,t,p;
        cin >> s >> t;
        int result =min(s.size(),t.size());
        for(int i=0; i<result; i++)
        { // operator;
            p+=s[i];
            p+=t[i];
        }
        if(s.size()>t.size())
        {    // subtr(x) << from index of x to end of string;
            p+=s.substr(result);
        }
        else
        {
            p+=t.substr(result);
        }
        cout << p << "\n";
    }
}