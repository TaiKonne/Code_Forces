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
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

void solve()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    double s = (a / b);
    double s1 = (c / d);
    if (s == s1)
    {
        cout << 0 nl;
        return;
    }
    else if (s1 == 0 || s == 0)
    {
        cout << 1 nl;
        return;
    }

    if (s < s1)
        swap(s, s1);
    if ((s / s1) == ceil(s / s1))
    {
        cout << 1 nl;
    }
    else
        cout << 2 nl;
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