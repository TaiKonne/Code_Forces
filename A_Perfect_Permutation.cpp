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
#define rall(r) r.rbegin(), e.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 nl;
        return;
    }
    vti a;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            a.pb(i - 1);
        }
        else
            a.pb(i + 1);
    }
    if (n % 2 != 0)
    {
        fr(i, 0, a.sz - 3)
                cout
            << a[i] space;
        cout << a[n - 1] - 1 space << a[n - 2];
    }
    else
    {
        fr(i, 0, a.sz - 1)
                cout
            << a[i] space;
    }
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