//  Print

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<exception>
#include<algorithm>
using namespace std;
void Loops_From_One_To_Number(int number)
{
    for(int i=1; i<=number; i++)
    {
        if(i==number)
        {
            cout << i;
        }
        else
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int number;
    cin >> number;
    Loops_From_One_To_Number(number);
}