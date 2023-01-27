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
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    int nut1 = a + b;
    nut1 *= n;
    int nut2 = a - b;
    nut2 *= n;
    int block1 = c + d;
    int block2 = c - d;
    if (nut1 < block2 || nut2 > block1)
        nope;
    else
        yep;
    // cout << nut1 sp << nut2 sp << block1 sp << block2 nl;
    /*
        n: tổng hạt gạo rơi
        a+b a-b: khối lượng hạt gạo
        c+d c-d: khối lượng cả gối

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