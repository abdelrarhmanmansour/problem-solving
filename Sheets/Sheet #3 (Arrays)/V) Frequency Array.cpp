//  Frequency Array

// this code is right but time limit exceed:

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int arr[n];
    int freq[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++)
    {
        int counter=1;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                counter++;
                freq[j]=-1;
            }
        }
        if(freq[i]!=-1)
        {
            cout << counter << "\n";
        }
    }
}
#######################################

// this code is accepted : topic frequency_Array: make values <<< indexs;
// and size of array bigger;
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int arr[100000]= {0};
    for(int i=0; i<n; i++)
    {
        int num;
        cin >> num;
        if(arr[num]==0)
        {
            arr[num]=1;
        }
        else
        {
            arr[num]=arr[num]+1;
        }
    }
    for(int i=1; i<=m; i++)
    {
        cout << arr[i] << endl;
    }
}