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

void solve()
{
    int n;
    cin >> n;
    vti a(n), b(n);

    fat(x, a)
    {
        cin >> x;
    }
    fat(x, b)
    {
        cin >> x;
    }

    if (n == 1)
    {
        if (b[0] - a[0] > 1 || b[0] - a[0] < 0)
        {
            nope;
            return;
        }
        else
        {
            yep;
            return;
        }
    }

    sort(all(a));
    sort(all(b));
    for (int i = 0; i < n; i++)
    {
        if (b[i] - a[i] > 1 || b[i] - a[i] < 0)
        {
            nope;
            return;
        }
    }
    yep;
    return;
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