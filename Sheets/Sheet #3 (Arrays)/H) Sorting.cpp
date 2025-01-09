// Sorting

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++)
    {
        // j<n-1 <<<<<<<< to stop at end of array , not give gaarbage value
        for(int j=0; j<n-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
     // we also can use j;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}