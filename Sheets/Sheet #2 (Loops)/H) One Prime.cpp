//  One Prime
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
  int number;
  cin >> number;
  int counter=0;
  for(int i=1;i<=number;i++)
  {
      if(number%i==0)
      {
          counter++;
      }
  }
  if(counter==2)
  {
      cout << "yes";
  }
  else
  {
      cout <<"no";
  }
}