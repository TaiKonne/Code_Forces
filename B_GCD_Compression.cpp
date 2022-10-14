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
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a;
    vti le;
    vti chan;
    fr(i, 1, n * 2)
    {
        int z;
        cin >> z;
        if (z % 2 == 0)
        {
            chan.pb(z);
        }
        else
            le.pb(z);
    }

    for (int i = 0; i < chan.sz - 1; i += 2)
    {
        a.pb({chan[i], chan[i + 1]});
    }
    for (int i = 0; i < le.sz - 1; i += 2)
    {
        a.pb({le[i], le[i + 1]});
    }
    fr(i, 0, n - 2)
    {
        cout << a[i].first << " " << a[i].second nl;
    }
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