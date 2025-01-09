//  8 Neighbors

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    char matrix[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int x,y;
    cin >> x >> y;
// we make x-- && y-- because x,y start at index 1 so we sub 1 to like as array;
    x--;
    y--;
    if(matrix[x-1][y]!='.'     &&  matrix[x+1][y]!='.' 
       &&matrix[x][y+1]!='.'   &&  matrix[x][y-1]!='.'
       &&matrix[x-1][y-1]!='.' &&  matrix[x-1][y+1]!='.'
       &&matrix[x+1][y-1]!='.' &&  matrix[x+1][y+1]!='.')
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}