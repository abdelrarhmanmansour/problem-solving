//N char
#include <iostream>
using namespace std;
int main()
{
   char c;
   cin >> c;
   if(c>='a'&&c<='z')
   {
       c-=32;
   }
   else
   {
       c+=32;
   }
   cout << c;
}