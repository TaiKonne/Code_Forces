#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;

    while (n != 0)
    {
        ll t = n % 10;
        if (t != 4 || t != 7)
        {
            cout << "NO";
            return 0;
        }
        // cout<<t<<" ";
        n /= 10;
    }

    cout << "YES";
}