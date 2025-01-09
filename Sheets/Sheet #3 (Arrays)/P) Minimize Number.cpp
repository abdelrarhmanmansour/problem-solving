//  Minimize Number

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int n,mi=INT_MAX;
    cin >> n;
    long long arr[n];
    for(int i=0; i<n; i++)
    {
        cin >>  arr[i];
    }
    for(int i=0; i<n; i++)
    {
        int counter=0;
        while(arr[i]%2==0)
        {
            arr[i]/=2;
            counter++;
        }
        mi=min(mi,counter);
    }
    cout << mi;
}