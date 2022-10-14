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
    int n;
    cin >> n;
    vti a(n);
    vti b(n);
    fat(x, a) cin >> x;
    fat(x, b) cin >> x;
    set<int> c;
    int Max = 0;
    for (int i = 0; i < a.sz; i++)
    {
        if (b[i] > a[i])
        {
            nope;
            return;
        }
        if (b[i] == 0)
        {
            Max = max(Max, abs(a[i] - b[i]));
        }
        if (b[i] != 0)
            c.insert(abs(a[i] - b[i]));
    }
    // cout << Max nl;
    if (c.sz == 0)
    {
        yep;
    }
    else if (c.sz == 1)
    {
        fat(x, c)
        {
            if (x >= Max)
            {
                yep;
                return;
            }
        }
        nope;
    }
    else
        nope;
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