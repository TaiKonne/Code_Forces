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
    ll n;
    cin >> n;
    vtll a(n);
    ll s = 0;
    ll s1 = 0;
    int fl = 0;
    vtll b;
    int j = 0;
    int cnt1 = 0;
    fat(x, a)
    {
        cin >> x;
        s1 += x;
        if (x == 1)
            cnt1++;
        fl++;
        s += x;
        if (fl == 2)
        {
            j += 2;
            b.pb(s);
            fl = 0;
            s = 0;
        }
    }
    // sort(all(a));
    for (j; j < a.sz; j++)
    {
        b.pb(a[j]);
    }

    ll Max = 0;
    ll s2 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        s1 -= a[i];
        s2 += a[i];
        Max = max(Max, __gcd(s1, s2));
    }
    cout << Max;

    /*
    chọn 1 số nguyên k
    chia mảng thành k phân đoạn
    tính s mỗi phân đoạn và viết tôngr này vào 1 mảng b
    the final score of such a split will be gcd(b1,b2,…,bk)‡.
    */
    // if (s % 2 == 0)
    // {
    //     cout << s / 2 nl;
    // }
    // else
    //     cout << 1 nl;
    // fat(x, b) cout << x sp;
    cout nl;
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