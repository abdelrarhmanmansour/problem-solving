//Area of circle
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
  double r;
  const double pi=3.141592653;
  cin >> r;
  double area= pi*r*r;
  cout <<  fixed << setprecision(9) << area;
}