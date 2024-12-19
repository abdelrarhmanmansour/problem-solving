// Fixed-Password
#include <iostream>
using namespace std;
int main()
{
    int x;
    int password=1999;
    while(true)
    {
        cin >> x;
        if(x==password)
        {
            cout << "Correct";
            break;
        }
        else
        {
            cout << "Wrong\n";
        }
    }
}