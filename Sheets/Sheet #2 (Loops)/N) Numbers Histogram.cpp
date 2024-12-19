// Numbers Histogram
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    char c;
    int number,numbers;
    cin >> c >> number;
    for(int i=1;i<=number;i++)
    {
        cin >> numbers;
        while(numbers>0)
        {
            cout << c;
            numbers--;
        }
        cout << endl;
    }
}