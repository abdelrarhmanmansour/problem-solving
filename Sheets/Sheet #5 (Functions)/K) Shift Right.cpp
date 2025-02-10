//  Shift Right

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<exception>
#include <algorithm>
using namespace std;
void Shift_Right_Array(int arr[],int n,int x)
{
    for(int i=0; i<x; i++)
    {
        int last=arr[n-1];
        for(int i=n-1; i>0; i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=last;
    }
}
void Print_Array(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n,x;
    cin >> n >> x;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    Shift_Right_Array(arr,n,x);
    Print_Array(arr,n);
}