//  Encrypt & Decrypt Message

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    int q;
    cin >> q;
    string Key= "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string Original= "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string s;
    cin >> s;
    if(q==1)
    {
        for(int i=0; i<s.size(); i++)
        {
            for(int o=0; o<Original.size(); o++)
            {
                if(s[i]==Original[o])
                {
                    cout << Key[o];
                    break;
                }
            }
        }
    }
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            for(int o=0; o<Key.size(); o++)
            {
                if(s[i]==Key[o])
                {
                    cout << Original[o];
                    break;
                }
            }
        }
    }
}