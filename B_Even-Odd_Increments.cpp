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
    int n, q;
    cin >> n >> q;
    ll s = 0;
    vtll a(n);
    int cnt_odd = 0, cnt_even = 0;
    fat(x, a)
    {
        cin >> x;
        s += x;
        if (x % 2 == 0)
            cnt_even++;
        else
            cnt_odd++;
    }
    for (int i = 0; i < q; i++)
    {
        ll type_query, data;
        cin >> type_query >> data;
        if (type_query == 0 && data % 2 == 0)
        {
            s += (cnt_even * data);
        }
        else if (type_query == 0 && data % 2 != 0)
        {
            s += (cnt_even * data);
            cnt_odd += cnt_even;
            cnt_even = 0;
        }
        else if (type_query == 1 && data % 2 != 0)
        {
            s += (cnt_odd * data);
            cnt_even += cnt_odd;
            cnt_odd = 0;
        }
        else
            s += (cnt_odd * data);
        cout << s nl;
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