// Next Alphabet
#include <iostream>
using namespace std;
int main()
{
   char alpha;
   cin >> alpha;
   if(alpha=='z')
   {
       cout << "a";
   }
   else
   {
       cout << char(alpha+1);
   }

}