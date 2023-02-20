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
#define srt(x) sort(x.bg, x.ed)
#define rsrt(x) sort(x.rbg, x.red)
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
const int mod = 1e9 + 7;

// It’s just a bad day, not a bad life!
// Leave Today for a Better Tomorrow

void solve()
{
    int n;
    cin >> n;
    vti a(n);
    fat(x, a) cin >> x;

    vti b;
    b.pb(a[0]);
    for (int i = 1; i < a.sz; i++)
    {
        b.pb(a[i] - a[i - 1]);
    }

    int fl = 0;
    for (int i = 0; i < b.sz; i++)
    {
        if (b[i] / 120 >= 1)
        {
            fl += b[i] / 120;
        }
        if (fl >= 2)
        {
            yep;
            return;
        }
    }
    if (1400 - a[a.sz - 1] >= 120)
    {
        yep;
        return;
    }
    nope;
    // fat(x, b) cout << x sp;
    // cout nl;
    /*
    100 200
    walking boy cần 120p liên tục
    */
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