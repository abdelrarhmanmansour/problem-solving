//  String Score

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,score=0;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='V')
        {
            score+=5;
        }
        else if(s[i]=='W')
        {
            score+=2;
        }
        else if(s[i]=='X')
        {
            i++;
        }
        else if(s[i]=='Y'&&i+1<s.size())
        {
            s.push_back(s[i+1]);
            i++;
        }
        else if(s[i]=='Z'&&i+1<s.size())
        {
            if(s[i+1]=='V')
            {
                score/=5;
                i++;
            }
            else if(s[i+1]=='W')
            {
                score/=2;
                i++;
            }
        }
    }
    cout << score;
}