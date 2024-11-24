// Age in Days
#include <iostream>
using namespace std;
int main()
{
    long long age;
    cin >> age;
    long long years= age/365; // 1
    long long rem_years= age%365; // 35
    long long months = rem_years/30; //1
    long long days = rem_years%30; // 5
    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days";
}