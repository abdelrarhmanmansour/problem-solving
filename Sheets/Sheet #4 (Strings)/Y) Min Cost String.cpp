// Min Cost String

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<exception>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cost[26],counter=0;
    for(int i=0; i<26; i++)
    {
        cin >> cost[i];
    }
    for(int i=0; i<s.size(); i++)
    {
        counter=0;
        if(s[i]=='?')
        {
            for(int z=i; z<s.size(); z++)
            {
                if(s[z]=='?')
                {
                    counter++;
                }
                else
                {
                    break;
                }
            }
            if(counter==s.size())
            {
                cout << "0" << "\n";
                for(int z=0; z<s.size(); z++)
                {
                    cout << "a";
                }
                return 0;
            }
            else
            {
                if(i==0)
                {
                    int max_=INT_MAX,index;
                    for(int z=0; z<s[counter]-97+1; z++)
                    {
                        int mycost= abs(cost[s[counter]-97]-cost[z]);
                        if(mycost<max_)
                        {
                            max_=mycost;
                            index=z;
                        }
                    }
                    char c =index+97;
                    for(int z=0; z<counter; z++)
                    {
                        s[z]=c;
                    }
                    i+=counter;
                }
                else if(i+counter==s.size())
                {

                    int max_=INT_MAX,index;
                    for(int z=0; z<s[i-1]-97+1; z++)
                    {
                        int mycost= abs(cost[s[i-1]-97]-cost[z]);
                        if(mycost<max_)
                        {
                            max_=mycost;
                            index=z;
                        }
                    }
                    char c =index+97;
                    for(int z=i; z<counter+i; z++)
                    {
                        s[z]=c;
                    }
                    break;
                }
                else
                {
                    int max_=INT_MAX,index;
                    for(int z=0; z<26; z++)
                    {
                        int mycost =  abs(cost[s[i-1]-97]-cost[z])+
                                      abs(cost[z]-cost[s[i+counter]-97]);
                        if(mycost<max_)
                        {
                            max_=mycost;
                            index=z;
                        }
                    }
                    char c =index+97;
                    for(int z=i; z<i+counter; z++)
                    {
                        s[z]=c;
                    }
                    i+=counter;
                }
            }
        }
    }
    long long final_cost=0;
    for(int i=0; i<s.size()-1; i++)
    {
        final_cost += abs(cost[s[i]-97]-cost[s[i+1]-97]);
    }
    cout << final_cost << "\n";
    cout << s;
}