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
    int n, s;
    cin >> n >> s;
    vti a(1001, 0);
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        a[z]++;
    }

    int s1 = 0;
    if (n == 1 && s == 1)
    {
        if (a[2] == 1)
            yep;
        else
            nope;
        return;
    }
    for (int i = 1; i < 1001; i++)
    {
        if (a[i] == 0)
        {
            s -= i;
            a[i]++;
            if (s <= 0)
            {
                break;
            }
        }
    }
    for (int i = 2; i < 1001; i++)
    {
        if (a[i] == 1 && a[i - 1] == 0)
        {
            nope;
            return;
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