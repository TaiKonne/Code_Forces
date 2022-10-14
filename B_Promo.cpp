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
    ll n, q;
    cin >> n >> q;
    vtll a(n);

    fr(i, 0, n - 1)
    {
        cin >> a[i];
    }
    sort(rall(a));
    a.insert(a.bg, 0);
    fr(i, 1, n)
        a[i] += a[i - 1];
    wh(q--)
    {
        ll x, y;
        cin >> x >> y;
        ll cnt = a[x] - a[x - y];
        cout << cnt nl;
    }
}

int main()
{
    solve();
}