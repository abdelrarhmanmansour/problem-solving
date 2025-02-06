//  Count

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    string letter;
    getline(cin,letter);
    int size_=letter.size(),sum=0;
    for(int i=0; i<size_; i++)
    {
        sum+=letter[i]-'0';
    }
    cout << sum;
}