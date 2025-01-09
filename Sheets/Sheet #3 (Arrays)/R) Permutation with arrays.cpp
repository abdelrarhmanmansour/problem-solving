// Permutation with arrays

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int arr1[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++)
    {
        cin >> arr1[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                swap(arr1[j],arr1[j+1]);
            }
        }
    }
    bool flag=false;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==arr1[i])
        {
            flag=true;
        }
        else
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }

}