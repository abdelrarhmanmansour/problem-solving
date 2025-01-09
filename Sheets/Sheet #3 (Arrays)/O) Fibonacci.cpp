//   Fibonacci

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int number;
    cin >> number;
    long long fib[55];
    fib[1]=0;
    fib[2]=1;
    for(int i=3; i<=number; i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    cout << fib[number];
}