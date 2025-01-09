//  Smallest Pair

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test>0)
    {
        int mini=INT_MAX;
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=i+1; j<=n; j++)
            {
                int smallest= arr[i-1]+arr[j-1]+(j-i);
                if(smallest<mini)
                {
                    mini=smallest;
                }
            }
        }
        cout << mini<< endl;
        test--;
    }
}