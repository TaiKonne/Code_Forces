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

int main()
{
    fast_out();
    ll n, m;
    cin >> n;

    ll a[100010];
    ll b[100010] = {0};
    ll c[100010]{0};

    fr(i, 1, n)
    {
        cin >> a[i - 1];
        b[i] = b[i - 1] + a[i - 1];
    }

    sort(a, a + n);
    fr(i, 1, n)
    {
        c[i] = c[i - 1] + a[i - 1];
    }

    cin >> m;
    wh(m--)
    {
        int ty, l, r;
        cin >> ty >> l >> r;
        if (ty == 1)
            cout << b[r] - b[l - 1] nl;
        else
            cout << c[r] - c[l - 1] nl;
    }
}