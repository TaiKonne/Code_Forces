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
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    int u = 0;
    int d = 0;
    for (int i = 1; i < a.sz; i++)
    {
        if (a[i] == a[i - 1])
        {
            u = i;
            break;
        }
    }
    for (int i = 1; i < b.sz; i++)
    {
        if (b[i] == b[i - 1])
        {
            d = i;
            break;
        }
    }
    if (u > 0)
    {
        string tmp = "";
        for (int i = u; i < a.sz; i++)
        {
            tmp += a[i];
        }
        reverse(all(tmp));
        b += tmp;
        for (int i = 1; i < b.sz; i++)
        {
            if (b[i] == b[i - 1])
            {
                nope;
                return;
            }
        }
    }
    yep;
    return;
    if (d > 0)
    {
        string tmp = "";
        for (int i = d; i < b.sz; i++)
        {
            tmp += b[i];
        }
        reverse(all(tmp));
        a += tmp;
        for (int i = 1; i < a.sz; i++)
        {
            if (a[i] == a[i - 1])
            {
                nope;
                return;
            }
        }
    }
    yep;
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