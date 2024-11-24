//  Two intervals
#include <iostream>
using namespace std;
int main()
{
    int L1,R1,L2,R2,max_=0,min_=0;
    cin >>L1 >> R1 >> L2 >> R2;
    if(L1>L2)
    {
        max_=L1;
    }
    else
    {
        max_=L2;
    }
    if(R1<R2)
    {
        min_=R1;
    }
    else
    {
        min_=R2;
    }
    if(max_>min_)
    {
        cout<< -1;
    }
    else
    {
        cout << max_<<" "<<min_;
    }

}