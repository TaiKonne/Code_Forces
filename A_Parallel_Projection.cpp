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
    int w, d, h;
    cin >> w >> d >> h;
    int a, b, f, g;
    cin >> a >> b >> f >> g;
    int s = h;
    /*
    có 4 hướng theo hình hộp, tìm min của ca 4 hướng
     */
    int sanx = abs(g - b) + abs(f - w) + abs(w - a);
    int sany = abs(g - b) + f + a;
    int tranx = abs(a - f) + b + g;
    int trany = abs(f - a) + abs(b - d) + abs(d - g);
    int fl = min({sany + trany, sany + tranx, sanx + trany + sanx + tranx});
    cout << min({sanx, sany, tranx, trany}) + s nl;
    // int min_san = min(abs(d - b), b);
    // int min_san1 = min(abs(w - b), b);
    // int min_tran = min(abs(d - g), g);
    // int min_tran1 = min(abs(w - g), g);
    // int min_1 = min(min_san, min_san1);
    // int min_2 = min(min_tran1, min_tran);
    // cout << abs(a - f) + min_1 + min_2 + s nl;
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