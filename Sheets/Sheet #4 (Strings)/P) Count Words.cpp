//   Count Words

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    //('!', '.', '?' and ',')
    //Shsssssssssh ... I am hunting wabbits. Heh Heh Heh Heh ...;
    string s;
    getline(cin,s);
    int counter=1;
    bool flag=true;
    for(int i=1; i<s.size(); i++)
    {
        if(isalpha(s[i]))
        {
            if(!flag)
            {
                counter++;
            }
            flag=true;
        }
        else
        {
            flag=false;
        }
    }
    cout <<  counter;
}