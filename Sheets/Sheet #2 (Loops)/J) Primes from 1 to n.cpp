// Primes from 1 to n
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    int number;
    cin >> number;
    for(int i=1;i<=number;i++)
    {
        int counter=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                counter++;
            }
        }
        if(counter==2)
        {
            cout << i << " ";
        }
    }
}