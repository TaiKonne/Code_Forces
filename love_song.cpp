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

int main()
{
    fast_out();
    int n, t;
    cin >> n >> t;
    string a;
    cin >> a;
    vti b;
    b.pb(0);
    ll s = 0;
    fr(i, 0, a.sz - 1)
    {
        s = b.back() + (int)(a[i] - 96);
        b.pb(s);
    }
    wh(t--)
    {
        int cnt = 0;
        int l, r;
        cin >> l >> r;

        cout << b[r] - b[l - 1] nl;
    }
    // fat(x,b)
    // {
    //     cout<<x space;
    // }

}