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
    vtll a;
    vtll b;
    vtll c;
    int cnt0 = 0;
    ll s = 0;
    ll Min = mod;
    for (int i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        Min = min(Min, abs(z));
        c.pb(z);
        s += abs(z);
        if (z < 0)
        {
            b.pb(z);
        }
        else if (z > 0)
        {
            a.pb(z);
        }
    }
    if (b.sz % 2 == 0)
    {
        cout << s nl;
    }
    else
    {
        ll fl = s - 2 * abs(Min);
        cout << fl nl;
    }
    rever
    /*

    1 2 -3 4 -5
    1 2 -3 -4 5

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