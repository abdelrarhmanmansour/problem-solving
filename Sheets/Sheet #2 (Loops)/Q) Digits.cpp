// Digits
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
// why i use string not long ong :
// if he enter like this: 0012 <<< we can not do this <<< so use string.
    int x;
    string numbers;
    cin >> x;
    while(x>0)
    {
        cin >> numbers;
        for(int i=numbers.size()-1;i>=0;i--)
        {
            cout << numbers[i] << " ";
        }
        cout << endl;
        x--;
    }
}