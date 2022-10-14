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

void solve()
{
    int n;
    cin >> n;
    vti a(n);
    vti b(n);
    fat(x, a) cin >> x;
    fat(x, b) cin >> x;
    int fl1 = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
            fl1++;
    }

    sort(all(a));
    sort(all(b));
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
            cnt++;
    }
    cnt++;
    cout << min(cnt, fl1) nl;
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