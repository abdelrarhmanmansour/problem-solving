// Square or rectangle


#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int h,w;
        cin >> h >> w;
        if(h==w)
        {
            cout << "Square\n";
        }
        else
        {
            cout << "Rectangle\n";
        }
    }
}