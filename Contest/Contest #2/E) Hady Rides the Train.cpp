// Hady Rides the Train

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    long long seat_number,row,col;
    cin >> seat_number;
    row = seat_number/4;
    if(row%2==0)
    {
        col = seat_number%4;
    }
    else
    {
        col = 3-(seat_number%4);
    }
    cout << row << " " << col;
}