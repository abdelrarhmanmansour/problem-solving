// PUM
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int number;
    cin >> number;
    for(int i=1;i<=number*4;i++)
    {
        if(i%4==0)
        {
            cout << "PUM" << endl;
        }
        else
        {
            cout << i << " ";
        }
    }
}