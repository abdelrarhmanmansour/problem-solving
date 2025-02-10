//  Wonderful Number

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<exception>
#include<algorithm>
using namespace std;
int index=0;
int *Binary(int number)
{
    int *arr=new int[100];
    while(number>0)
    {
        arr[index]=number%2;
        number/=2;
        index++;
    }
    return arr;
}
bool Palindrome(int arr[])
{
    for(int i=0,z=index-1; i<index,z>=0; i++,z--)
    {
        if(arr[i]!=arr[z])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int number;
    cin >> number;
    if(number%2==0)
    {
        cout << "NO";
        return 0;
    }
    int *res= Binary(number);
    int result =Palindrome(res);
    if(result)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}