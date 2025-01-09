// Replacement

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int size_;
    cin >> size_;
    int arr[size_];
    for(int i=0; i<size_; i++)
    {
        cin >> arr[i];
        if(arr[i]==0)
        {
            arr[i]=0;
        }
        else if(arr[i]>0)
        {
            arr[i]=1;
        }
        else
        {
            arr[i]=2;
        }
    }
    for(int i=0; i<size_; i++)
    {
        cout << arr[i] << " ";
    }
}