// Some Sums
#include <iostream>
using namespace std;
int main()
{
    int n,a,b,sum=0;
    cin >> n>> a >> b;
    for(int i=1;i<=n;i++)
    {
        int sum_digits=0;
        int s=i;
        while(s>0)
        {
            int x = s%10;
            sum_digits+=x;
            s/=10;
        }
        if(sum_digits>=a&&sum_digits<=b)
        {
            sum+=i;
        }
    }
    cout << sum;
}