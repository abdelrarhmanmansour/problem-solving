// Sequence of Numbers and Sum
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int x,y;
    while(1)
    {
        cin >> x >> y;
        if(x>y)
        {
            int z=y;
            y=x;
            x=z;
        }
        if(x<=0||y<=0)
        {
            break;
        }
        else
        {
            int sum=0;
            for(int i=x; i<=y; i++)
            {
                sum+=i;
                cout << i << " " ;
            }
            cout << "sum =" << sum << endl;
        }
    }
}