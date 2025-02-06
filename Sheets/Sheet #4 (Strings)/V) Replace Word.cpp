//  Replace Word

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    //01234567891123456
    //BRITISHEGYPTGHANA
    //EGYPT
    string s,res="EGYPT";
    cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        int index=0;
        int x=i;
        for(index=0; index<5&&x<s.size(); index++,x++)
        {
            if(s[x]!=res[index])
            {
                break;
            }
        }
        if(index==5)
        {
            cout << " ";
            i+=4;
        }
        else
        {
            cout << s[i];
        }
    }
}