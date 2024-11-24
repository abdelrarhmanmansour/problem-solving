// First Digit
#include <iostream>
using namespace std;
int main()
{
   int x;
   cin >> x;
   int f = x/1000;
   if(f%2==0)
   {
       cout << "EVEN\n";
   }
   else
   {
       cout <<"ODD";
   }
}