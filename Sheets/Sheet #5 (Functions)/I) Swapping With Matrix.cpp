//  Swapping With Matrix

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<exception>
#include<algorithm>
using namespace std;
const int s=500;
void Swap_Row(int matrix[s][s],int n,int x,int y)
{
    for(int i=0; i<n; i++)
    {
        int temp=matrix[x][i];
        matrix[x][i]=matrix[y][i];
        matrix[y][i]=temp;
    }
}
void Swap_Col(int matrix[s][s],int n,int x,int y)
{
    for(int i=0; i<n; i++)
    {
        int temp=matrix[i][y];
        matrix[i][y]=matrix[i][x];
        matrix[i][x]=temp;
    }
}
void Print_After_Swapping(int matrix[s][s],int n)
{
    for(int row=0; row<n; row++)
    {
        for(int col=0; col<n; col++)
        {
            cout <<  matrix[row][col] << " ";
        }
        cout << "\n";
    }
}
int main()
{
    int n,x,y;
    cin >> n >> x >> y;
    int matrix[s][s];
    for(int row=0; row<n; row++)
    {
        for(int col=0; col<n; col++)
        {
            cin >> matrix[row][col];
        }
    }
    x--;
    y--;
    Swap_Row(matrix,n,x,y);
    Swap_Col(matrix,n,x,y);
    Print_After_Swapping(matrix,n);
}