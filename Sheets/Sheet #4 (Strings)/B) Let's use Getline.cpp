//  Let's use Getline

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin,s,'\\');
    cout << s;
}