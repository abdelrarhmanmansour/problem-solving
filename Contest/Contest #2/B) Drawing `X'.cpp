// Drawing `X'

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<x; j++)
        {
            if(i==j && i!=x/2 && j!=x/2)
            {
                cout << "\\";
            }
            else if(i==x/2 && j==x/2)
            {
                cout << "X";
            }
            else if(i==((x-1)-j) && j!=x/2)
            {
                cout << "/";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
// Hint for solution: 2D-Array:
  01234
0 \***/
1 *\*/*
2 **X**
3 */*\*
4 /***\