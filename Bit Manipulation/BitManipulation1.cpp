#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    if ((n & 1) == 1)
    {
        cout<<n<<" is Odd Number";
    }
    else
    {
        cout<<n<< " is Even Number";
    }

    return 0;
}