// Winter Sale
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int discount;
    int price_after_discount;
    cin >> discount >> price_after_discount;
    float fraction = 1-(discount/100.0);
    float orignal_price = price_after_discount/fraction;
    cout  << fixed << setprecision(2) << orignal_price;
}