// Two number
#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    cin >> num1 >> num2;
    int floor= num1/num2;
    int round = 0;
    int ceil = 0;
    if((num1%num2)*2>=num2&&num1>0)
    {
       round= (num1/num2)+1;

    }
    else
    {
        round= num1/num2;
    }
    if(num1%num2!=0&&num1>0)
    {
        ceil = (num1/num2)+1;
    }
    else
    {
         ceil = (num1/num2);
    }
    cout << "floor " << num1 << " " << "/ " << num2 << " " << "= " << floor << endl;
    cout << "ceil " << num1 << " " << "/ " << num2 << " " << "= " << ceil << endl;
    cout << "round " << num1 << " " << "/ " << num2 << " " << "= " << round<< endl;
}