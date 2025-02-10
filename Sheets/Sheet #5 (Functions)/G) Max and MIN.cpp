//  Max and MIN

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<exception>
#include<algorithm>
using namespace std;
void Max_and_MIN_Array(int arr[],int elements)
{
    int maxi=INT_MIN,mini= INT_MAX;
    for(int i=0;i<elements;i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
        }
        if(arr[i]<mini)
        {
            mini=arr[i];
        }
    }
    cout << mini << " " << maxi;
}
int main()
{
    int elements;
    cin >> elements;
    int arr[elements];
    for(int i=0;i<elements;i++)
    {
        cin >> arr[i];
    }
    Max_and_MIN_Array(arr,elements);
}