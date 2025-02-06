//  Sort String

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,arr[26]= {0};
    cin >> n;
    // first loop : to enter a string of size n;
    // if i have ascii of character then subtract 97 <<< we know order of character;
    for(int i=0; i<n; i++)
    {
        char c;
        cin >> c;
        int ascii = c;
        arr[ascii-97]++;
    }
    // second loop : when i !=0;
    for(int i=0; i<=25; i++)
    {
        while(arr[i]!=0)
        {
            cout << (char)(i+97);
            arr[i]--;
        }
    }
}