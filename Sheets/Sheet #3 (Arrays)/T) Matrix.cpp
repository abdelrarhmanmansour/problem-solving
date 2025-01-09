//  Matrix

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int matrix[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int sum_main=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                sum_main+=matrix[i][j];
            }
        }
    }
    int sum_sec=0;
    for(int i=0; i<n; i++)
    {
        sum_sec+=matrix[i][(n-1)-i];
    }
    int result = abs(sum_main-sum_sec);
    cout << result;
}