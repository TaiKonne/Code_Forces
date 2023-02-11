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
    int n, s, r;
    cin >> n >> s >> r;
    // vti a = {1, 2, 3, 4, 5, 6};
    // reverse(all(a));
    vti a(n - 1);
    int s1 = s - r;
    vti b;
    // s1 += s - r;
    a.pb((s - r));
    int m = n;
    n--;
    for (int i = 0; i < n; i++)
    {
        a[i] = 1;
        r -= 1;
    }
    int i = 0;
    while (r != 0)
    {
        if (a[i] < s1)
        {
            a[i]++;
            r--;
        }
        else
            i++;
    }
    fat(x, a) cout << x sp;
    cout nl;
    /*
    n: tổng số lượng xx


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