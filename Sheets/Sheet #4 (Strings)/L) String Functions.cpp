//   String Functions

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,q,x,y,pos;
    cin >> n >> q;
    string s;
    cin >> s;
    while(q--)
    {
        string choice;
        cin >> choice;
        if(choice=="pop_back")
        {
            s.pop_back();
        }
        else if(choice=="front")
        {
            cout <<  s.front() << "\n";
        }
        else if(choice=="back")
        {
            cout <<  s.back() << "\n";
        }
        else if(choice=="sort")
        {
            cin >> x >> y;
            if(x>y)
            {
                swap(x,y);
            }
            sort(s.begin()+x-1,s.begin()+y);
        }
        else if(choice=="reverse")
        {
            cin >> x >> y;
            if(x>y)
            {
                swap(x,y);
            }
            reverse(s.begin()+x-1,s.begin()+y);
        }
        else if(choice=="print")
        {
            cin >> pos;
            cout << s[pos-1] << "\n";
        }
        else if(choice=="substr")
        {
            cin >> x >> y;
            if(x>y)
            {
                swap(x,y);
            }
            string result = s.substr(x-1,(y-x)+1);
            cout << result <<"\n";
        }
        else if(choice=="push_back")
        {
            char x;
            cin >> x;
            s.push_back(x);
        }
    }
}