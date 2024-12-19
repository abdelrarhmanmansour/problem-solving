//Even, Odd, Positive and Negative
#include <iostream>
using namespace std;
int main()
{
    int number,cntpos=0,cntneg=0,cnteven=0,cntodd=0;
    cin >> number;
    int numbers;
    for(int i=1;i<=number;i++)
    {
        cin >> numbers;
        if(numbers>0)
        {
            cntpos++;
        }
        else if (numbers==0)
        {

        }
        else{cntneg++;}
        if(numbers%2==0)
        {
            cnteven++;
        }
        else{cntodd++;}
    }
    cout << "Even: " << cnteven << endl;
    cout << "Odd: " << cntodd << endl;
    cout << "Positive: " << cntpos << endl;
    cout << "Negative: " << cntneg << endl;
}