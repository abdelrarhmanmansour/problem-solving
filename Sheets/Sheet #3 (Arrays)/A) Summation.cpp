//  Summation

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    long long size_,sum=0;
    cin >> size_;
    long long arr[size_];
    for(int i=0; i<size_; i++)
    {
        cin >> arr[i];
        sum+=arr[i];
    }
    if(sum>0)
    {
        cout << sum;
    }
    else
    {
        cout << sum*-1;
    }
}