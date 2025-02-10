// Prime Function

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<exception>
#include<algorithm>
using namespace std;
bool isPrime(int number)
{
    if (number<= 1) return false;
    if (number== 2) return true;
    if (number% 2 == 0) return false;

    // skipping even numbers
    for (int i = 3; i <= sqrt(number); i += 2)
    {
        if (number % i == 0)
        {
            return false; // Not prime
        }
    }
    return true; // Prime
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        long long number;
        cin >> number;
        if(isPrime(number))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}