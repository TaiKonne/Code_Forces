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

    int other = 0;
    int step = 0, fl = 0;
    for (int i = 0; i < a.sz; i++)
    {
        if (a[i] <= 'Z')
        {
            a[i] += 32;
        }
        if (a[i] != 'm' && a[i] != 'e' && a[i] != 'w' && a[i] != 'o')
            other++;
    }
    if (other != 0)
        nope;
    else
    {
        int m = 0, e = 0, o = 0, w = 0;
        wh(a[step] == 'm' && step < n)
        {
            step++;
            m++;
        }
        wh(a[step] == 'e' && step < n)
            step++,
            e++;
        wh(a[step] == 'o' && step < n)
            step++,
            o++;
        wh(a[step] == 'w' && step < n)
            step++,
            w++;
        if (step == n && (m != 0 && e != 0 && o != 0 && w != 0))
            yep;
        else
            nope;
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