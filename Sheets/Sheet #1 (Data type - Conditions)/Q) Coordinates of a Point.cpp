// Coordinates of a Point
#include <iostream>
using namespace std;
int main()
{
    float x,y;
    cin >> x>> y;
    if(x==0&&y==0)
    {
        cout << "Origem";
    }
    if(x!=0&&y==0)
    {
        cout << "Eixo X";
    }
    if(x==0&&y!=0)
    {
        cout << "Eixo Y";
    }
    if(x>0&&y>0)
    {
        cout << "Q1";
    }
    if(x<0&&y>0)
    {
        cout << "Q2";
    }
    if(x<0&&y<0)
    {
        cout << "Q3";
    }
    if(x>0&&y<0)
    {
        cout << "Q4";
    }
}