//  Is B a subsequence of A 

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    long long arr[n];
    long long sub_arr[m];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<m; i++)
    {
        cin >> sub_arr[i];
    }
    int indx=0;
    for(int i=0; i<n && indx<m; i++)
    {
        if(sub_arr[indx]==arr[i])
        {
            indx++;
        }
    }
    if(indx==m)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}