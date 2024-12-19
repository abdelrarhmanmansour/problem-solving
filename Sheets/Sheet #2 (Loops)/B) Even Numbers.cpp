// Even Numbers
#include <iostream>
using namespace std;
int main()
{
    int number;
    cin >> number;
    for(int i=1;i<=number;i++)
    {
        if(i%2==0)
        {
            cout << i << endl;
        }
        if(number==1)
        {
            cout << -1;
        }
    }
}