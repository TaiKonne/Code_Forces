#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vti vector<int>
#define vtll vector<long long>
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
#define sp << " "
#define fr(i, l, r) for (int i = l; i <= r; i++)
#define fl(i, r, l) for (int i = r; i >= l; i--)
#define wh while
#define fat(x, a) for (auto &x : a)
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

void solve()
{
    int n, m;
    cin >> n >> m;
    int le = 0, chan = 0;
    ll s = 0;
    fr(i, 1, n)
    {
        int z;
        cin >> z;
        if (z % 2 == 0)
            chan++;
        else
            le++;
        s += z;
    }
    if (n == m)
    {
        if (s % 2 != 0)
            yep;
        else
            nope;
    }
    else if (le != 0)
    {
        if (chan != 0)
        {
            if (le % 2 == 1)
            {
                yep;
            }
            else
            {
                if (m <= n - 1)
                {
                    yep;
                }
                else
                {
                    nope;
                }
            }
        }
        else
        {
            if (m % 2 == 1 && m <= le)
            {
                yep;
            }
            else
            {
                nope;
            }
        }
    }
    else
    {
        nope;
    }
}

int main()
{
    fast_out();
    int t;
    cin >> t;
    wh(t--)
    {
        solve();
    }
}