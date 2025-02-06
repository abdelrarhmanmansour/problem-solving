//  Comparison

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    //0123456
    //acmicpc
    string s,p1,p2;
    cin >> s;
    string result=s;
    for(int i=0; i<s.size()-1; i++)
    {
        p1.push_back(s[i]);
        p2=s.substr(i+1,s.size()-i);
        sort(p1.begin(),p1.end());
        sort(p2.begin(),p2.end());
        result = min(result,p1+p2);
    }
    cout << result;
}