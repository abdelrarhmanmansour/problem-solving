// Searching

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    long long size_;
    cin >> size_;
    long long arr[size_];
    for(int i=0; i<size_; i++)
    {
        cin >> arr[i];
    }
    long long number;
    cin >> number;
    int flag=-1;
    for(int i=0; i<size_; i++)
    {
        if(number==arr[i])
        {
            flag=i;
            break;
        }
    }
    if(flag!=-1)
    {
        cout << flag;
    }
    else
    {
        cout << flag;
    }
}