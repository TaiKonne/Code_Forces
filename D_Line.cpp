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
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;

    vector<ll> aa, bb;
    ll cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'R')
            cnt += (n - i - 1);
        else
        {
            cnt += i;
        }
        if (i < (n - i - 1) && a[i] == 'L')
            bb.pb(n - 1 - i - i);
        else if (i > (n - i - 1) && a[i] == 'R')
        {
            bb.pb(i + i + 1 - n);
        }
    }

    sort(rall(bb));
    ll cnt1 = 0;
    int mm = bb.sz;

    for (int i = 0; i < mm; i++)
    {
        cnt1 += bb[i];
        aa.pb(cnt + cnt1);
    }

    for (int i = mm; i < n; i++)
    {
        aa.pb(cnt + cnt1);
    }

    for (int i = 0; i < aa.sz; i++)
    {
        cout << aa[i] sp;
    }
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