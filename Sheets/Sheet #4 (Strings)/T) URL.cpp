//  URL

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
        if(s[i]=='?')
        {
            i++;
            while(i<s.size())
            {
                if(s[i]=='=')
                {
                    cout << ": ";
                }
                else if(s[i]=='&')
                {
                    cout << "\n";
                }
                else
                {
                    cout << s[i];
                }
                i++;
            }
        }
    }
}