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
    int m, s;
    cin >> m >> s;
    int s1 = 0;
    int Max = 0;
    vector<bool> a(1001, false);
    for (int i = 1; i <= m; i++)
    {
        int z;
        cin >> z;
        Max = max(z, Max);
        a[z] = true;
    }

    for (int i = 1; i <= s; i++)
    {
        if (a[i] == 0 && s > 0)
        {
            a[i] = true;
            s -= i;
            Max = max(i, Max);
        }
    }
    if (s != 0)
        nope;
    else
    {
        for (int i = 1; i <= Max; i++)
        {
            if (a[i] == false)
            {
                nope;
                return;
            }
        }
        yep;
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