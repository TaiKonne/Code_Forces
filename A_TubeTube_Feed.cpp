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
/*var a = document.querySelectorAll(".MJX_Assistive_MathML")
a.forEach(s=> s.remove())*/

struct tube
{
    /* data */
    int index = 0;
    int giay = 0;
    int Max = 0;
};

void solve()
{
    int n, m;
    cin >> n >> m;
    vti a(n);
    vti b(n);
    int fl = 0;
    fat(x, a)
    {
        cin >> x;
        if (x <= m)
            fl = 1;
    }
    fat(x, b) cin >> x;

    if (fl == 1)
    {
        int fl = 0;
        tube t;

        for (int i = 0; i < n; i++)
        {
            if (m - a[i] - i >= 0)
            {
                if (t.Max < b[i])
                {
                    t.Max = b[i];
                    t.index = i + 1;
                }
            }
        }
        if (t.index == 0)
        {
            cout << -1 nl;
        }
        else
            cout << t.index nl;
    }
    else
    {
        cout << -1 nl;
    }
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