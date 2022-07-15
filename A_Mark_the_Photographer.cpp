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
#define space << " "
#define vtpi vector<pair<int, int>>
#define pft first
#define psc second
#define fr(i, l, r) for (int i = l; i <= r; i++)
#define fl(i, r, l) for (int i = r; i >= l; i--)
#define wh while
#define fat(x, a) for (auto &x : a)
#define srt(x) sort(x.bg, x.ed)
#define rsrt(x) sort(x.rbg, x.red)
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), e.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

void solve()
{
    int n, x;
    cin >> n >> x;
    vti a(n * 2);
    fat(x, a) cin >> x;
    sort(all(a));
    vti b;
    vti c;
    fr(i, 0, n - 1)
    {
        b.pb(a[i]);
    }
    fr(i, n, a.sz - 1)
    {
        c.pb(a[i]);
    }

    fr(i, 0, n - 1)
    {
        if (c[i] - b[i] < x)
        {
            nope;
            return;
        }
    }
    yep;
    return;
    // fr(i, 0, n)
    // {
    //     cout << c[i] space;
    // }
    // cout nl;
}

int main()
{
    int t;
    cin >> t;
    wh(t--)
    {
        solve();
    }
}