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
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main()
{
    fast_out();
    int n, m, k;
    cin >> n >> m;
    k = m;
    vtll a(n);
    fat(x, a) cin >> x;

    a.insert(a.bg, 1);
    // a.pb(0);
    fr(i, 1, a.sz - 1)
    {
        a[i] += a[i - 1];
    }
    a.erase(a.bg);
    wh(m--)
    {
        ll z;
        cin >> z;
        ll binary = upper_bound(all(a), z) - a.bg;
        cout << binary + 1 space;
        if (binary >= 1)
            cout << z - a[binary - 1] + 1 nl;
        else
            cout << a[0] - (a[0] - 1 - z) - 1 nl;
    }
    // fat(x, a) cout << x space;
}