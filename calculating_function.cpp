#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    long long n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n / 2;
    }
    else if (n % 2 != 0)
    {
        cout << "-" << (n + 1) / 2;
    }
}