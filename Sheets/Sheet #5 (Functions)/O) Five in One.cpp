//   Five in One

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<exception>
#include <algorithm>
using namespace std;
int Return_Maximum_Array(int arr[],int n)
{
    int maxi= INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
        }
    }
    return maxi;
}
int Return_Minimum_Array(int arr[],int n)
{
    int mini= INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<mini)
        {
            mini=arr[i];
        }
    }
    return mini;
}
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
int Return_Count_Prime_Numbers(int arr[],int n)
{
    int counter_prime=0;
    for(int i=0; i<n; i++)
    {
        if(isPrime(arr[i]))
        {
            counter_prime++;
        }
    }
    return counter_prime;
}
// this function i must need it , because if i use this function[Return_Count_Palindrome_Numbers] without it
// if i want to use other function all elements in array will be zero;
bool Palindrome(int number)
{
    int counter=0;
    int reverse_number=0;
    int original_number=number;
    while(number>0)
    {
        int digit=number%10;
        reverse_number=reverse_number*10+digit;
        number/=10;
    }
    if(reverse_number==original_number)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int Return_Count_Palindrome_Numbers(int arr[],int n)
{
    int counter=0;
    for(int i=0; i<n; i++)
    {
        if(Palindrome(arr[i]))
        {
            counter++;
        }
    }
    return counter;
}
int countDivisors(int num) {
    if (num < 1) return 0;
    int counter = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            counter++;
        }
    }
    return counter;
}
int Return_Maximum_Number_Of_Divisors(int arr[],int n)
{
    int maxi=INT_MIN;
    int res=arr[0];
    for(int i=0; i<n; i++)
    {
        int result =countDivisors(arr[i]);
        if(result>maxi||(result==maxi&&arr[i]>res))
        {
            maxi=result;
            res=arr[i];
        }
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >>  arr[i];
    }
    cout << "The maximum number : " << Return_Maximum_Array(arr,n) << "\n";
    cout << "The minimum number : " << Return_Minimum_Array(arr,n) << "\n";
    cout << "The number of prime numbers : " << Return_Count_Prime_Numbers(arr,n) << "\n";
    cout << "The number of palindrome numbers : " << Return_Count_Palindrome_Numbers(arr,n) << "\n";
    cout << "The number that has the maximum number of divisors : " << Return_Maximum_Number_Of_Divisors(arr,n);
}