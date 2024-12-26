// Finding Minimums

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int n,k,numbers,mini=INT_MAX,counter=0;
    cin >> n >> k;
    for(int i=1; i<=n; i++)
    {
        cin >> numbers;
        if(numbers<mini)
        {
            mini=numbers;
        }
        counter++;
        if(counter==k ||i==n )
        {
            cout << mini << " ";
            counter=0;
            mini=INT_MAX;
        }
    }
}