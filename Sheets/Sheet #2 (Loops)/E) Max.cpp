// Max
#include <iostream>
using namespace std;
int main()
{
    int number;
    cin >> number;
    int numbers;
    int max_=INT_MIN;
   for(int i=1;i<=number;i++)
   {
       cin >> numbers;
       if(numbers>max_)
       {
           max_=numbers;
       }
   }
   cout << max_;
}