// Capital or Small or Digit
#include <iostream>
using namespace std;
int main()
{
   char x;
   cin >> x;
   if(x>='0'&&x<='9')
   {
       cout << "IS DIGIT";
   }
   else
   {
       cout << "ALPHA\n";
       if(x>='a'&&x<='z')
       {
           cout << "IS SMALL";
       }
       else
       {
           cout << "IS CAPITAL";
       }
   }
}