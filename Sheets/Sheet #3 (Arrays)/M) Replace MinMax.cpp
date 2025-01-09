//  Replace MinMax

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int n,mini=INT_MAX,maxi=INT_MIN;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]<mini)
        {
            mini=arr[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]==maxi)
        {
            cout << mini  << " ";
        }
        else if(arr[i]==mini)
        {
            cout << maxi  << " ";
        }
        else
        {
            cout << arr[i] << " ";
        }
    }
}