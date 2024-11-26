// Lucky Numbers
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int y=x%10;
    x/=10;
    if(y==0)
    {
        cout << "YES";
        return 0;
    }

    if(x%y==0||y%x==0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

}