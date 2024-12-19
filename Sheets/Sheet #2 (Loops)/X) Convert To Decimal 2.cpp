// Convert To Decimal 2
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int x;
    cin >> x;
    long long decimal;
    while(x>0)
    {
        cin >> decimal;
        int ones=0;
        while(decimal>0)
        {
            if(decimal%2==1)
            {
                ones++;
            }
            decimal/=2;
        }
        long long sum=0;
        for(int i=0;i<ones;i++)
        {
            sum+= pow(2,i);
        }
        cout << sum << endl;
        x--;
    }
}