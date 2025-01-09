//  Search In Matrix

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int matrix[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int number;
    cin >> number;
    bool flag=false;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(number==matrix[i][j])
            {
                flag=true;
                break;
            }
        }
    }
    if(flag)
    {
        cout << "will not take number";
    }
    else
    {
        cout << "will take number";
    }
}