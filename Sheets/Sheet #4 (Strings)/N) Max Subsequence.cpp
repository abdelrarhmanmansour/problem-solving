//  Max Subsequence

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    int x,counter=0;
    cin >> x;
    string s;
    cin >> s;
    for(int i=0; i<x-1; i++)
    {
        if(s[i]!=s[i+1])
        {
            counter++;
        }
    }
    // why i make counter+1  <<  if i finish 3 <<<<<  +1 to cout all letter max;
    cout << counter+1;
}