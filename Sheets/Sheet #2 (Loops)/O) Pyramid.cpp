// Pyramid
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}