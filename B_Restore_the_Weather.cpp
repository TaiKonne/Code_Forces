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
/*var a = document.querySelectorAll(".MJX_Assistive_MathML")
a.forEach(s=> s.remove())*/
void solve()
{

    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        a.pb(make_pair(z, i));
    }
    vti b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort(all(a));
    sort(all(b));
    vti z(n);
    for (int i = 0; i < n; i++)
    {
        z[a[i].second] = b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << z[i] sp;
    }
    cout nl;
    /*

    mảng a chứa dự báo thời tiết cho n này
    ai: nhiệt độ dự đoán
    bi: nhiệt độ thật nhưng bị lộn xộn
    dự báo ko lệnh quá k độ
    | a[i]-b[i]|<=k

    -1 3 -2 0 -5 -1
    0 0 -1 4 -4   0

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