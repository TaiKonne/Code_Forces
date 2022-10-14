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

int main()
{
    int n;
    cin >> n;
    vtll a;
    vtll b;
    vti c;
    fr(i, 0, n - 1)
    {
        int x;
        cin >> x;
        a.pb(x);
        c.pb(x);
    }
    sort(all(c));
    int flc = 0;
    fr(i, 0, a.sz - 1)
    {
        if (a[i] != c[i])
        {
            flc = 1;
        }
    }
    if (flc == 0)
    {
        cout << "yes" nl;
        cout << 1 space << 1;
        return 0;
    }
    a.pb(99999999999);
    int fl = -1;
    fr(i, 0, a.sz - 2)
    {
        if (a[i] > a[i + 1])
        {
            b.pb(0);
            fl = i;
        }
        else
        {
            b.pb(1);
        }
    }
    b.insert(b.bg + fl, 0);
    int l = -1, r = 0;
    fr(i, 0, b.sz - 1)
    {
        if (b[i] == 0 && l == -1)
        {
            l = i;
        }
        if (b[i] == 0)
        {
            r = i;
        }
    }
    // cout << l space << r;
    a.pop_back();
    reverse(a.begin() + l, a.end() - (n - r - 1));
    int fll = 0;
    fr(i, 0, a.sz - 1)
    {
        if (a[i] != c[i])
        {
            fll = 1;
        }
    }
    if (fll == 1)
    {
        cout << "no";
    }
    else
    {
        cout << "yes" nl;
        cout << l + 1 space << r + 1;
    }
}