// Palindrome Array

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    bool p =true;
    long long size_;
    cin >> size_;
    long long arr[size_];
    for(int i=0; i<size_; i++)
    {
        cin >> arr[i];
    }
    long long arr1[size_];
    for(int i=0; i<size_; i++)
    {
        arr1[i]= arr[(size_ -1)-i];
    }
    for(int i=0; i<size_; i++)
    {
        if(arr1[i]!=arr[i])
        {
            p=false;
        }
    }
    if(p)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}