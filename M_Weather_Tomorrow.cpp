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
    int n;
    cin >> n;
    vti a(n);
    fat(x, a) cin >> x;
    set<int> c;
    for (int i = 0; i < a.sz - 1; i++)
    {
        c.insert(a[i] - a[i + 1]);
    }
    if (c.sz > 1)
    {
        cout << a[n - 1];
    }
    else
    {
        cout << (a[1] - a[0]) * n + a[0];
    }
    cout nl;
    // fat(x, b) cout << x sp;
    /*
    nếu nhiệt độ trung bình trong n ngày là cấp số cộng



    */
}