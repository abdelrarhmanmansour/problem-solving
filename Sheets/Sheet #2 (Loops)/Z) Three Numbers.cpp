// Three Numbers
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int s,e,counter=0;
    cin >> s >> e;
// why we end at s : because we can not exceed the s[first number].
    for(int i=0; i<=s; i++)
    {
        for(int j=0; j<=s; j++)
        {
            if(e-i-j>=0 && e-i-j<=s)
            {
                counter++;
            }
        }
    }
    cout << counter;
}