// New Array

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<exception>
#include <algorithm>
using namespace std;
void Concatenation_Array(int arr1[],int arr2[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr2[i] << " ";
    }
    for(int i=0; i<n; i++)
    {
        cout << arr1[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr1[n],arr2[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr1[i];
    }
    for(int i=0; i<n; i++)
    {
        cin >> arr2[i];
    }
    Concatenation_Array(arr1,arr2,n);
}