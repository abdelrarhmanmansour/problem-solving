//  Binary Search

//  this code right but give time limit exceed;

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int n,q;
    cin >> n >> q;
    long long arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    while(q--)
    {
        long long x;
        cin >> x;
        int flag=-1;
        for(int i=0; i<n; i++)
        {
            if(arr[i]==x)
            {
                flag=i;
            }
        }
        if(flag!=-1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
}
// #######################################################
// this code accepted:  Algorithm Binary Search:

#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
int Binary_Search(int arr[],int left,int right,int search)
{
    while(left<=right)
    {
        // mid of array;
        int mid = left+(right - left)/2;
        if(arr[mid]==search)
        {
            return mid;
        }
        else if(arr[mid]<search)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n,q;
    cin >> n >> q;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    // built in function to sort array;
    sort(arr,arr+n);
    while(q--)
    {
        int num_search;
        cin >> num_search;
        int result = Binary_Search(arr,0,n-1,num_search);
        if(result==-1)
        {
            cout << "not found\n";
        }
        else
        {
            cout << "found\n";
        }
    }
}