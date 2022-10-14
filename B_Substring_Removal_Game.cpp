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
    string a;
    cin >> a;
    a = a + '0';
    vti b;
    int cnt = 0;
    fr(i, 0, a.sz - 2)
    {
        if (a[i] == '1')
        {
            cnt++;
        }
        else
        {
            b.pb(cnt);
            cnt = 0;
        }
    }
    b.pb(cnt);
    sort(rall(b));
    int s = 0;
    fr(i, 0, b.sz - 1)
    {
        if (i % 2 == 0)
            s += b[i];
    }
    cout << s;
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