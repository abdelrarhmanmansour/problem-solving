// Sort Numbers
#include <iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    int max_;
    int min_;
    int mid;
    cin >> num1 >> num2 >> num3;
    if(num1>=num2&&num1>=num3)
    {
        max_=num1;
        if(num2>=num3)
        {
            min_=num3;
            mid=num2;
        }
        else
        {
            min_=num2;
            mid=num3;
        }
    }
    else if(num2>=num1&&num2>=num3)
    {
         max_=num2;
         if(num1>=num3)
        {
            min_=num3;
            mid=num1;
        }
        else
        {
            min_=num1;
            mid=num3;
        }
    }
    else
    {
        max_=num3;
         if(num1>=num2)
        {
            min_=num2;
            mid=num1;
        }
        else
        {
            min_=num1;
            mid=num2;
        }
    }
    cout << min_ << endl;
    cout << mid << endl;
    cout << max_ << endl;
    cout << endl<< num1 << endl;
    cout << num2 << endl;
    cout << num3;
}