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

int main()
{
    fast_out();
    int n, m;
    cin >> n >> m;
    vti a(n);
    fat(x, a)
    {
        cin >> x;
    }
    int cnt = 0;
    int l = 0, r = 0;
    int s = 0;
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    while (r < a.sz)
    {
        if (s + a[r] <= m)
        {
            s += a[r];
            r++;
        }
        else
        {
            cnt++;
            s = 0;
        }
        // r++;
    }
    cout << cnt+1;
}