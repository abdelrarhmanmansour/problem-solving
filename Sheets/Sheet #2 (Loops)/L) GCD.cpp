// GCD
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    int num1,num2;
    cin >> num1 >> num2;
    if(num2<num1)
    {
        int num3=num2;
        num2=num1;
        num1=num3;
    }
    int result=0;
    for(int i=1;i<=num2;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            result= i;
        }
    }
    cout << result;
}