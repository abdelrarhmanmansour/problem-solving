// Construct the Sum

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int arr[1000005];
int main()
{
    long long times,num1,num2, size_=0;
    cin >> times;
    for(int i=1;i<=times;i++)
    {
        cin >> num1 >> num2;
        if(num1*(num1+1)/2 < num2)
        {
            cout << -1;
        }
        else
        {
             long long sum=0;
            for(int j=num1;j>=1;j--)
            {
                if(j<=num2)
                {
                    sum+=j;
                    arr[size_]=j;
                    size_++;
                }
                if(sum==num2)
                {
                    break;
                }
            }
        }
         for(int z=0;z<size_;z++)
            {
                cout << arr[z] << " ";
            }
            cout << endl;
            size_=0;
    }
}