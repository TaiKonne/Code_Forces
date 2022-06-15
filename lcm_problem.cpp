#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vt vector<int>
#define yep cout << "YES" nl
#define nope cout << "NO" nl
#define ll long long
#define lg long
#define db double
#define pb push_back
#define bg begin()
#define ed end()
#define rbg rbegin()
#define red rend()
#define sz size()
#define space << " "

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x = 0, y = 0, l, r;
        cin >> l >> r;
        if (l * 2 <= r)
        {
            x = l;
            y = l * 2;
        }
        else
        {
            x = -1;
            y = -1;
        }
        cout << x space << y nl;
    }
}