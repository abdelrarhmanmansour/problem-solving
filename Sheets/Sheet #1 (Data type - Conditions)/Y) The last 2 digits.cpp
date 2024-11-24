// The Last 2 digit
#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int n1=a%100;
    int n2=b%100;
    int n3=c%100;
    int n4=d%100;
    int mul= (n1*n2*n3*n4)%100;
    if(mul<10)
    {
        cout << 0<<mul;
    }
    else
    {
        cout << mul;
    }
}