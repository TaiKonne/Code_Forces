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
    vti a(n);
    fat(x, a) cin >> x;
    vti b = a;
    reverse(all(b));
    if (is_sorted(all(a)))
    {
        cout << 0 nl;
    }
    else
    {
        if (a[0] == n && a[n - 1] == 1)
        {
            cout << 3 nl;
        }
        else if (a[0] == 1 || a[n - 1] == n)
        {
            cout << 1 nl;
        }
        else
        {
            cout << 2 nl;
        }
    }
    /*
    2 1 4 5 3
    1 2 4 5 3
    1 2 3 4 5

    */
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