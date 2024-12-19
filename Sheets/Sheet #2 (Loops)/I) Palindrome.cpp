//  Palindrome
#include <iostream>
using namespace std;
int main()
{
    int number;
    cin >> number;
    int num2=number;
    int result=0;
    while(number>0)
    {
       int reverse_number= number%10;
       result=result*10+reverse_number;
       number/=10;
    }
    cout << result << endl;
    if(num2==result)
    {
        cout <<"YES\n";
    }
    else{cout << "NO\n";}
}