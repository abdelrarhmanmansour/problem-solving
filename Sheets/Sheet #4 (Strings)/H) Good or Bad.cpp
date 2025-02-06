//  Good or Bad

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
    cin.ignore();
    while(test--)
    {
        int flag =-1;
        string s;
        getline(cin,s);
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0')
            {
                flag=i;
                break;
            }
            else if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='1')
            {
                flag=i;
                break;
            }
            else
            {
                flag=-1;
            }
        }
        if(flag!=-1)
        {
            cout << "Good\n";
        }
        else
        {
            cout << "Bad\n";
        }
    }
}