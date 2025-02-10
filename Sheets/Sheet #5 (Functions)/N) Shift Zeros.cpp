//  Shift Zeros

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<exception>
#include <algorithm>
using namespace std;
void Shift_Zeros(int arr[],int n)
{
    int counter=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            counter++;
        }
        else
        {
            cout << arr[i] << " ";
        }
    }
    for(int i=0; i<counter; i++)
    {
        cout << "0" << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >>  arr[i];;
    }
    Shift_Zeros(arr,n);
}