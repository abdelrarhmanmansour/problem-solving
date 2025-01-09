//  Mirror Array

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    long long matrix[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=m-1; j>=0; j--)
        {
            cout << matrix[i][j] << " " ;
        }
        cout << endl;
    }
}