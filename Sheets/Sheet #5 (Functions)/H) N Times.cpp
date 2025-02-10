//  N Times

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<exception>
#include<algorithm>
using namespace std;
void N_Times(int number,char c)
{
    for(int i=1; i<=number; i++)
    {
        cout << c << " ";
    }
    cout << "\n";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int number;
        char c;
        cin >> number >> c;
        N_Times(number,c);
    }
}