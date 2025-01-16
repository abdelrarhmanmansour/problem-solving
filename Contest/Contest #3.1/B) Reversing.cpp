//  Reversing

#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i]==0)
        {
            //  arr << mean index zero;
            //  arr+i << ex: arr+2 << mean first two element;
            reverse(arr,arr+i);
        }
    }
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}