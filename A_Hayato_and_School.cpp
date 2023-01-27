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
    int n;
    cin >> n;
    vti odd;
    vti even;
    vti a;
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        if (z % 2 == 0)
            even.pb(z);
        else
            odd.pb(z);
        a.pb(z);
    }
    if (odd.sz >= 3)
    {
        yep;
        int fl = 0;
        for (int i = 0; fl < 3 && i < a.sz; i++)
        {
            if (a[i] % 2 != 0)
            {
                cout << i + 1 sp;
                fl++;
            }
        }
        cout nl;
    }
    else if (odd.sz < 3 && odd.sz != 0 && even.sz >= 2)
    {
        yep;
        for (int i = 0; i < a.sz; i++)
        {
            if (a[i] % 2 != 0)
            {
                cout << i + 1 sp;
                break;
            }
        }
        int fl = 0;
        for (int i = 0; i < a.sz; i++)
        {
            if (a[i] % 2 == 0)
            {
                cout << i + 1 sp;
                fl++;
            }
            if (fl == 2)
            {
                break;
            }
        }
        cout nl;
    }
    else
        nope;
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