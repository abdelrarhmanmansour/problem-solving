//  Distinct Numbers

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<exception>
#include <algorithm>
using namespace std;
int Distinct_Numbers(int arr[],int n)
{
    int counter=0;
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]!=arr[i+1])
        {
            counter++;
        }
    }
    return counter+1;
}
int main()
{
    int n;
    cin >> n;
    if(n==0)
    {
        cout << "0";
        return 0;
    }
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >>  arr[i];;
    }
    sort(arr,arr+n);
    cout << Distinct_Numbers(arr,n);
}