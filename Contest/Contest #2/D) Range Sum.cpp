//  Range Sum

// This code is true but at codeforces [Time limit exceed]:

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int cases,l,r;
    cin >> cases;
    while(cases>0)
    {
        cin >> l >>r;
        if(l>=r)
        {
            int s=r;
            r=l;
            l=s;
        }
        int sum=0;
        for(int i=l; i<=r; i++)
        {
            sum+=i;
        }
        cout << sum << endl;
        cases--;
    }
}

// this code is accepted at codeforces:

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
   long long cases,l,r;
   cin >> cases;
   while(cases>0)
   {
       cin >> l >> r;
       long long ma=max(l,r);
       long long mi=min(l,r);
       mi--;
       long long result_max= (ma*(ma+1))/2;
       long long result_min=(mi*(mi+1))/2;
       cout << (result_max-result_min) << endl;
       cases--;
   }
}