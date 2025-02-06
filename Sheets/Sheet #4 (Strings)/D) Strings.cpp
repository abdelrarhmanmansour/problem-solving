//  Strings

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    int size1=a.size();
    int size2=b.size();
    string result = a+b;
    swap(a[0],b[0]);
    cout << size1 << " " << size2 << "\n";
    cout << result << "\n";
    cout << a << " " << b;
}