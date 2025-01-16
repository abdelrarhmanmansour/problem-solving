//  Alternating Array
// the main point is (i%2==0);
#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<algorithm>
using namespace std;
int MinOFSign(int arr[],int n)
{
    int mini1=0,mini2=0;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            if(arr[i]<0)
            {
                mini1++;
            }
        }
        else
        {
            if(arr[i]>0)
            {
                mini1++;
            }
        }
        if(i%2==0)
        {
            if(arr[i]>0)
            {
                mini2++;
            }
        }
        else
        {
            if(arr[i]<0)
            {
                mini2++;
            }
        }
    }
    return min(mini1,mini2);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int result = MinOFSign(arr,n);
    cout << result << "\n";
}