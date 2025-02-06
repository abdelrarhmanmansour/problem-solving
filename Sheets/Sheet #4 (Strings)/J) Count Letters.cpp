//  Count Letters

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    sort(s.begin(),s.end());
    for(int i=0; i<s.size(); i++)
    {
        if (i > 0 && s[i] == s[i - 1])
        {
            continue;
        }
        long long counter=0;
        for(int j=0; j<s.size(); j++)
        {
            if(s[i]==s[j])
            {
                counter++;
            }
        }
        cout << s[i] << " : " << counter << "\n";
    }
}