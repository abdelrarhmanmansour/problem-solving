//  Lowest Number

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int size_,mini=INT_MAX,flag=-1;
    cin >> size_;
    int arr[size_];
    for(int i=0; i<size_; i++)
    {
        cin >> arr[i];
        if(arr[i]<mini)
        {
            mini=arr[i];
            flag=i+1;
        }
    }
    cout << mini << " " << flag;
}