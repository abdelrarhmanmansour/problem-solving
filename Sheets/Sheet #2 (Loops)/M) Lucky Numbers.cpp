// Lucky Numbers
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    int num1,num2,counter=0;
    cin >> num1 >> num2;
    bool islucky=true;
    for(int i=num1;i<=num2;i++)
    {
        int x=i;
        while(x>0)
        {
            if(x%10!=4 && x%10!=7)
            {
                islucky=false;
                break;
            }
            x/=10;
        }
        if(islucky)
        {
            cout << i << " ";
            counter++;
        }
        else
        {
            islucky=true;
        }
    }
    if(counter==0)
    {
        cout << -1;
    }
}