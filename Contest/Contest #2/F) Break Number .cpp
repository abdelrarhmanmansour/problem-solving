// Break Number

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    long long times;
    int maxi=INT_MIN,number;
    cin >> number;
    for(int i=1; i<=number; i++)
    {
        int counter=0;
        cin >> times;
        while(times>0)
        {
            if(times%2==0)
            {
                counter++;
                times/=2;
            }
            else
            {
                break;
            }
        }
        if(counter>maxi)
        {
            maxi=counter;
        }
    }
    cout << maxi;
}