//  Reverse Words

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
    int start=0;
    for(int i=0; i<=s.size(); i++)
    {
        if(s[i]==' '|| i == s.size())
        {
            reverse(s.begin()+start,s.begin()+i);
            start=i+1;
        }
    }
    cout  << s;
}