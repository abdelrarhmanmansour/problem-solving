//  Count Subarrays

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int test,counter=0;
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
            // this counter <<<< to count 1,3,6,7;
            counter++;
            for(int j=i+1; j<n; j++)
            {
                if(arr[j]>arr[j-1])
                {
                    counter++;
                }
                else
                {
                    break;
                }
            }
        }
        cout << counter;
        counter=0;
        cout << endl;
        test--;
    }
}