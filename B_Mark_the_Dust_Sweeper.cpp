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
#define space << " "
#define vtpi vector<pair<int, int>>
#define pft first
#define psc second
#define fr(i, l, r) for (int i = l; i <= r; i++)
#define fl(i, r, l) for (int i = r; i >= l; i--)
#define wh while
#define fat(x, a) for (auto &x : a)
#define srt(x) sort(x.bg, x.ed)
#define rsrt(x) sort(x.rbg, x.red)
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), e.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

void solve()
{
    int n;
    cin >> n;
    ll s = 0;
    vtll a(n);

    fr(i, 0, a.sz - 1)
    {
        cin >> a[i];
        s += a[i];
    }

    ll cnt = 0;
    int fl = 0;
    int cnt1 = 0;
    wh(true)
    {
        if (cnt1 == n - 1)
        {
            cout << cnt nl;
            return;
        }
        cnt++;
        fl(i, a.sz - 1, 1)
        {
            a[i]++;
            a[i - 1]--;
            cnt++;

            if (a[i] == 0)
            {
                cnt1++;
            }
            break;
        }
    }

    // fr(i, 0, a.sz - 1)
    // {
    //     cout << a[i] space;
    // }
    // cout << cnt nl;
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