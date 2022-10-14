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
    if (n < 2)
    {
        cout << 0 nl;
        return;
    }
    else if (n < 4)
    {
        cout << 1 nl;
        return;
    }
    int s = 2, fl = 0;
    vector<int> a;
    a.pb(2);
    int cnt = 0;
    for (int i = 2; s < n; i++)
    {
        s = s + (2 * i) + (i - 1);
        a.pb(s);
    }

    int bi = 10;
    wh(n > 1)
    {
        bi = upper_bound(all(a), n) - a.bg;
        // cnt++;
        // cout << n sp;
        n -= a[bi - 1];
        cnt++;
    }
    cout << cnt;
    // fat(x, a) cout << x sp;

    cout nl;
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