// Positions in array

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int size_;
    cin >> size_;
    int arr[size_];
    for(int i=0; i<size_; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<size_; i++)
    {
        if(arr[i]<=10)
        {
            cout << "A[" << i << "] = " << arr[i] << endl;
        }
    }
}