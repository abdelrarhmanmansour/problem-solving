//  Check Code

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    string s;
    cin >> s;
    if(a+b+1!=s.size())
    {
        cout << "No";
        return 0;
    }
    if(s[a]!='-')
    {
        cout << "No";
        return 0;
    }
    int counter=0;
    for(int i=0; i<s.size(); i++)
    {

        if(s[i]>='0' && s[i]<='9' && i!=a)
        {
            counter++;
        }
    }
    if(counter==a+b)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}