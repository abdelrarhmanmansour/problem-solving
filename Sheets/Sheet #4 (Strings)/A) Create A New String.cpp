// not missign any variable in string [Ascii] <<< array of character;
//  Create A New String

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
    int x= s.length();
    int y= t.length();
    cout << x << " " << y << "\n";
    string res = s+" "+t;
    cout << res;
}