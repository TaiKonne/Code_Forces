#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    int dem = 0;
    ll t = 0;
    while (n != 0)
    {
        t = n % 10;
        if (t == 4 || t == 7)
        {
            dem++;
        }
        n /= 10;
    }

    if (dem == 4 || dem == 7)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}