#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int count = 0;
    while (num > 0)
    {
        num = num & num - 1;
        count++;
    }
    cout <<"Count of number of set bits : "<< count;

    return 0;
}