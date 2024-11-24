// Mathematical Expression
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    char s,q;
    cin >> a >> s >> b>> q >>c ;
    int sum=a+b;
    int mul=a*b;
    int sub=a-b;
    if(s=='+')
    {
        if(a+b==c )
        {
            cout << "Yes";
        }
        else
        {
            cout << sum;
        }
    }
    if(s=='-')
    {
        if(a-b==c)
        {
            cout << "Yes";
        }
        else
        {
            cout << sub;
        }
    }
    if(s=='*')
    {
        if(a*b==c)
        {
            cout << "Yes";
        }
        else
        {
            cout << mul;
        }
    }

}