//  Lucky Array

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int n,mini=INT_MAX;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i]<mini)
        {
            mini=arr[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        int counter=0;
        for(int j=0; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                counter++;
            }
        }
        if(arr[i]==mini)
        {
            if(counter%2==0)
            {
                cout << "Unlucky";
                break;
            }
            else
            {
                cout << "Lucky";
                break;
            }
        }
    }
}