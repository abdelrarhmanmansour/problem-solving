//Digits Summation
#include <iostream>
using namespace std;
int main()
{
  long long num1,num2,x,y;
  cin >> num1 >>num2;
  x= num1%10;
  y= num2%10;
  cout << x+y;
}