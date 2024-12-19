// Easy Fibonacci
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int number;
    cin >> number;
    int s=0,b=1;
    if(number==1)
    {
        cout << s;
    }
    else if(number==2)
    {
        cout <<  s << " " << b;
    }
    else
    {
        cout << s << " " << b << " ";
        for(int i=2;i<number;i++)
        {
            int x= s+b;
            cout << x << " ";
            s=b;
            b=x;
        }
    }
}