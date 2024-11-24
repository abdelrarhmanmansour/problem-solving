// float or int
#include <iostream>
using namespace std;
int main()
{
    double number;
    cin >> number;
    int x= number;
    if(x==number)
    {
        cout << "int " << x;
    }
    else
    {
        cout << "float " << x << " " <<  number-x;
    }
}