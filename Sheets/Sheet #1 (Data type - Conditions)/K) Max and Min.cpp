// Max and Min
#include <iostream>
using namespace std;
int main()
{
    int a,b,c,max_num,min_num;
    cin >> a >> b >> c;
    if(a>=b&&a>=c)
    {
        max_num=a;
    }
    else if(b>=a&&b>=c)
    {
        max_num=b;
    }
    else
    {
        max_num=c;
    }
    if(a<=b&&a<=c)
    {
        min_num=a;
    }
    else if(b<=a&&b<=c)
    {
        min_num=b;
    }
    else
    {
        min_num=c;
    }
    cout << min_num << " " << max_num;
}