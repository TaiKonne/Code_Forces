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

void solve()
{
    int n, k;
    cin >> n >> k;
    // anh ta có n đống kẹo
    // đống kẹo i thì có ai kẹo
    // anh ta làm theo như sao
    // chọn i<j
    // aj=ai+aj
    // nếu đống kẹo nào nhiều hơn k thì bị mất sức mạnh
    vti a(n);
    fat(x, a) cin >> x;
    sort(all(a));
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        int fl = 0;
        while (a[i] + a[0] <= k)
        {
            a[i] = a[i] + a[0];
            cnt++;
        }
    }
    // fat(x, a) cout << x sp;
    cout << cnt nl;
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