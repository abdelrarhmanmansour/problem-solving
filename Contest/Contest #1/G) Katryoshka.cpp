//  Katryoshka
// this code is true but on codeforces gives time limit exceed because using while loop
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long eyes,mouth,body;
    cin >> eyes >> mouth >> body;
    int counter=0;
    if(eyes==0 || body==0)
    {
        cout << 0;
        return 0;
    }
    else
    {
        while(eyes>0 && body>0)
        {
            if(eyes>=1 && mouth>=1 && body>=1)
            {
                counter++;
                eyes--;
                mouth--;
                body--;
            }
            else if(eyes>=2 && mouth>=1 && body>=1)
            {
                counter++;
                eyes-=2;
                mouth--;
                body--;
            }
            else if(eyes>=2 && body>=1)
            {
                counter++;
                eyes-=2;
                body--;
            }
            else
            {
                cout << counter;
                return 0;
            }
        }
    }
    cout << counter;
}
// this code accepted on codeforces

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    long long eyes,mouth,body,res=0;
    cin >> eyes >> mouth >> body;
    long long one =min({eyes,mouth,body});
    res+=one;
    eyes-=one;
    mouth-=one;
    body-=one;
    one = min({eyes/2,body});
    res+=one;
    cout << res;
}