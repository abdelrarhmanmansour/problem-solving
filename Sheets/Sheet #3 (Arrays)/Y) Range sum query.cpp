//  Range sum query

//  this code right but give time limit exceed;

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int n,q;
    cin >> n >> q;
    long long arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<q; i++)
    {
        int l,r;
        cin >> l >> r;
        long long sum=0;
        for(int j=l-1; j<l; j++)
        {
            for(int k=l-1; k<r; k++)
            {
                sum+=arr[k];
            }
        }
        cout << sum << endl;
    }
}

// this code accepted:

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int n,q;
    cin >> n >> q;
    long long arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=1; i<n; i++)
    {
        arr[i]+=arr[i-1];
    }
    while(q--)
    {
        int l,r;
        cin >> l >> r;
        long long sum=0;
        if(l==1)
        {
            sum=arr[r-1];
        }
        else
        {
            sum=arr[r-1]-arr[l-2];
        }
        cout << sum << endl;
    }
}