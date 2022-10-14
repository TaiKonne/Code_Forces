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
    int n, m;
    cin >> n >> m;

    vti a(n);
    vti le, re;
    fat(x, a) cin >> x;
    vtll b;
    vtll c;

    fr(i, 0, n - 2)
    {
        if (a[i] > a[i + 1])
        {
            int fb = a[i] - a[i + 1];
            b.pb(fb);
        }
        else
            b.pb(0);
    }
    b.insert(b.bg, 0);
    // b.pb(0);
    fl(i, n - 2, 0)
    {
        if (a[i + 1] > a[i])
        {
            int fc = a[i + 1] - a[i];
            c.pb(fc);
        }
        else
            c.pb(0);
    }
    fr(i, 1, b.sz - 1) // s<t
    {
        b[i] += b[i - 1];
    }

    fr(i, 1, c.sz - 1) // s>t
    {
        c[i] += c[i - 1];
    }

    c.insert(c.bg, 0);
    sort(rall(c));
    // fat(x, b) cout << x space;
    // cout nl;
    // fat(x, c) cout << x space;

    wh(m--)
    {
        int s, t;
        cin >> s >> t;
        s--;
        t--;
        if (s < t)
        {
            cout << b[t] - b[s] nl;
        }
        else
        {
            cout << c[t] - c[s] nl;
        }
    }
}