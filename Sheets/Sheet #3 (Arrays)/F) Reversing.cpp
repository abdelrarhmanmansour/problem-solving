//  Reversing
// here one more solution 
// the first solution is right but this not change in memory but right:

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    long long size_;
    cin >> size_;
    long long arr[size_];
    for(int i=0; i<size_; i++)
    {
        cin >> arr[i];
    }
    for(int i=size_-1; i>=0; i--)
    {
        cout <<  arr[i] << " ";
    }
}
// ##############################################################
// the second solution [ better than first soiution ]:

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    long long size_;
    cin >> size_;
    long long arr[size_];
    for(int i=0; i<size_; i++)
    {
        cin >> arr[i];
    }
    long long arr1[size_];
    for(int i=0; i<size_; i++)
    {
        arr1[i]= arr[(size_ -1)-i];

    }
    for(int i=0; i<size_; i++)
    {
        cout << arr1[i] << " ";
    }
}