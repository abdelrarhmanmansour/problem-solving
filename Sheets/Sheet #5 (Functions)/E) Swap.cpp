//  Swap

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<exception>
#include<algorithm>
using namespace std;
void Swap(int* x,int* y)
{
    int z=*y;
    *y=*x;
    *x=z;
}
int main()
{
    int x,y;
    cin >> x >> y;
    Swap(&x,&y);
    cout << x << " " << y;
}