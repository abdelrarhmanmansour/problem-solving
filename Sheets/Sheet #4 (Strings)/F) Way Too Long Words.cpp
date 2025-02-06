//  Way Too Long Words

#include<iostream>
#include<cmath>
#include<string>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    int test;
    cin >> test;
    cin.ignore();
    while(test--)
    {
        string letter;
        getline(cin,letter);
        if(letter.size()<=10)
        {
            cout << letter << endl;
        }
        else
        {
            cout << letter[0] << letter.size()-2 << letter[letter.size()-1] << endl;
        }
    }
}