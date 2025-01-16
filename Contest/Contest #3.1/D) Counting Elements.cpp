/  Counting Elements

#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }                 //0,1,2,3,4,5  ix;
    sort(arr,arr+n); // 0,1,2,3,3,5  array;
    int temp=0;
    int res=0; // numbers of value; عددهم
    int counter=0;
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            temp=arr[i];
            res=1;
        }
        else
        {
            if(temp==arr[i])
            {
                res++;
            }
            else if(temp+1==arr[i])
            {
                counter+=res;
                temp=arr[i];
                res=1;
            }
            else
            {
                temp=arr[i];
                res=1;
            }
        }
    }
    cout << counter;
}