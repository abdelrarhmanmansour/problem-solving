//  Sum of Consecutive Odd Numbers
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int x;
    int number1,number2;
    cin >> x;
    while(x>0)
    {
        cin >> number1 >> number2;
        if(number1>number2)
        {
            int z=number2;
            number2=number1;
            number1=z;
        }
        int sum=0;
        for(int i=number1+1; i<number2; i++)
        {
            if(i%2!=0)
            {
                sum+=i;
            }
        }
        cout << sum << endl;
        x--;
    }
}