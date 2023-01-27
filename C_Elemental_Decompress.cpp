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
    int x[n + 1], y[n + 1];
    memset(x, 0, sizeof(x));
    memset(y, 0, sizeof(y));
    int fl = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        x[i + 1] -= 1;
        y[i + 1] -= 1;
    }
    int xx[n];
    int yy[n];
    memset(xx, 0, sizeof(xx));
    memset(yy, 0, sizeof(yy));
    set<int> a1, a2;
    for (int i = 0; i < n; i++)
    {
        if (x[a[i]] == -1)
        {
            x[a[i]] = i;
            xx[i] = a[i];
        }
        else if (y[a[i]] == -1)
        {
            y[a[i]] = i;
            yy[i] = a[i];
        }
        else
        {
            nope;
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (x[i + 1] == -1)
        {
            a1.insert(i + 1);
        }
        if (y[i + 1] == -1)
        {
            a2.insert(i + 1);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (xx[i] == 0)
        {
            auto fll = a1.upper_bound(yy[i]);
            if (fll == a1.begin())
            {
                nope;
                return;
            }
            else
            {
                fll--;
                xx[i] = *fll;
                a1.erase(fll);
            }
        }
        else
        {
            auto fll = a2.upper_bound(xx[i]);
            if (fll == a2.begin())
            {
                nope;
                return;
            }
            else
            {
                fll--;
                yy[i] = *fll;
                a2.erase(fll);
            }
        }
    }
    yep;
    for (int i = 0; i < n; i++)
    {
        cout << xx[i] sp;
    }
    cout nl;
    for (int i = 0; i < n; i++)
    {
        cout << yy[i] sp;
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