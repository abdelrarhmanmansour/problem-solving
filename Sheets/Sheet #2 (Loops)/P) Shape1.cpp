// Shape1
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for(int i=x;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}