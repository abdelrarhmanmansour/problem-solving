//  Max Subarray

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test>0)
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
            cout << arr[i] <<  " ";
            int v=arr[i];
            for(int j=i+1; j<n; j++)
            {
                v=max(v,arr[j]);
                cout << v << " ";
            }
        }
        cout << endl;
        test--;
    }
}