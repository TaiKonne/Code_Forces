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
    ll p1, p2;
    string x1, x2;
    cin >> x1;
    cin >> p1;
    cin >> x2;
    cin >> p2;

    if (x1.sz + p1 > x2.sz + p2)
    {
        cout << ">";
    }
    else if (x1.sz + p1 < x2.sz + p2)
    {
        cout << "<";
    }
    else
    {
        int fl1 = min(p1, p2);
        p1 -= fl1;
        p2 -= fl1;
        while (p1--)
            x1 += '0';
        while (p2--)
            x2 += '0';
        if (x1 > x2)
            cout << ">";
        else if (x1 < x2)
            cout << "<";
        else
            cout << "=";
        // cout << x1 sp << x2;
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