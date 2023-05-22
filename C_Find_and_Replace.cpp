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
    string a;
    cin >> a;

    set<char> b;
    for (int i = 0; i < a.sz; i++)
    {
        b.insert(a[i]);
        if (a[i] == a[i + 1])
        {
            nope;
            return;
        }
    }

    if (b.sz == 1)
    {
        yep;
        return;
    }
    else
    {
        int fl = 0, fl1 = 0;
        string tmp1 = a;
        fat(x, a)
        {
            fr(i, 0, tmp1.sz - 1)
            {
                if (x == tmp1[i])
                {
                    tmp1[i] = fl;
                }
            }
            if (fl == 1)
                fl = 0;
            else
                fl = 1;
        }
        for (int i = 0; i < tmp1.sz - 1; i++)
        {
            if (tmp1[i] == tmp1[i + 1])
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