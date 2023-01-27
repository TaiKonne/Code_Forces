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
    int n, d;
    cin >> n >> d;
    vti a(n);
    fat(x, a) cin >> x;
    int step = 0;
    // 1 3 10 2
    // 10-8=2
    // 8/2=4
    // 1 3 5 2
    // 5-2=3
    //
    fr(i, 1, n - 1)
    {
        if (a[i - 1] >= a[i])
        {
            int fl = (a[i - 1] - a[i]);

            step += (fl / d + 1);
            a[i] += (fl / d + 1) * d;
        }
    }
    // fat(x, a) cout << x sp;
    // cout nl;
    cout << step;
}