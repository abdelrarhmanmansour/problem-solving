//  New Words

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int counter_e=0,counter_g=0,counter_y=0,counter_p=0,counter_t=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='e' || s[i]=='E')
        {
            counter_e++;
        }
        else if(s[i]=='g' || s[i]=='G')
        {
            counter_g++;
        }
        else if(s[i]=='y' || s[i]=='Y')
        {
            counter_y++;
        }
        else if(s[i]=='p' || s[i]=='P')
        {
            counter_p++;
        }
        else if(s[i]=='t' || s[i]=='T')
        {
            counter_t++;
        }
    }
    int result= min({counter_e,counter_g,counter_y,counter_p,counter_t});
    cout << result;
}