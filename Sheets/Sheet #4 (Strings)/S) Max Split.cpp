//  Max Split

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    // LLRRLLLRRR;
    string s;
    cin >> s;
    vector<string>r;
    int counter_L=0,counter_R=0,start=0,counter_lenght=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='L')
        {
            counter_L++;
        }
        else if(s[i]=='R')
        {
            counter_R++;
        }
        if(counter_L==counter_R)
        {
            counter_lenght++;
            r.push_back(s.substr(start,i-start+1));
            counter_L=0;
            counter_R=0;
            start=i+1;
        }
    }
    cout << counter_lenght << "\n";
    for(string e:r)
    {
        cout  << e  << "\n";
    }
}