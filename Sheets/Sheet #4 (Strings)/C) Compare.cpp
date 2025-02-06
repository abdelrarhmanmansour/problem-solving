//  Compare
// not compare for lenght << but compare between Ascii code for two string;
// first solution:
#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    string s,t;
    getline(cin,s);
    getline(cin,t);
    // operator overloading between two string ;
    if(s<t)
    {
        cout << s;
    }
    else
    {
        cout << t;
    }
}

// second solution: [from scratch]:
#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    string s,t;
    getline(cin,s);
    getline(cin,t);
    int size1=s.size();
    int size2=t.size();
    int lenght=min(size1,size2);
    int flag=0;
    for(int i=0; i<lenght; i++)
    {
        if(s[i]<t[i])
        {
            cout << s;
            flag=0;
            break;
        }
        else if(t[i]<s[i])
        {
            cout << t;
            flag=0;
            break;
        }
        else
        {
            flag=-1;
        }
    }
    if(flag==-1)
    {
        if(size1<size2)
        {
            cout << s;
        }
        else
        {
            cout << t;
        }
    }
}