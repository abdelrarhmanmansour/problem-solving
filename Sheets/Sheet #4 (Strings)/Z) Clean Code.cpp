//   Clean Code

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<exception>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    bool open =true;
    while(getline(cin,s))
    {
        bool flag=false;
        if(s.size()==0 || s==" ")
        {
            continue;
        }
        for(int i=0; i<s.size(); i++)
        {
            // single line
            if(s[i]=='/'&&s[i+1]=='/'&&open)
            {
                break;
            }
            else if(s[i]=='/'&&s[i+1]=='*')
            {
                i++;
                open=false;
            }
            else if(s[i]=='*'&&s[i+1]=='/'&&!open)
            {
                i++;
                open=true;
            }
            else if(open)
            {
                cout << s[i];
                flag=true;
            }
        }
        if(flag&&open)
        {
            cout << "\n";
        }
    }
}