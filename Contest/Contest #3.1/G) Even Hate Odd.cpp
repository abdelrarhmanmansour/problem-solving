//  Even Hate Odd

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        long long arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        int even=0,odd=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(even==odd)
        {
            cout << 0 << "\n";
        }
        else if(n%2!=0)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << abs(odd-even)/2 << "\n";
        }
    }
}