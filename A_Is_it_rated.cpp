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
string rate = "rated";
string unrate = "unrated";
string maybe = "maybe";
int main()
{
    fast_out();
    int n;
    cin >> n;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        a.pb({x, y});
    }
    int fl = 0;
    // for (int i = 0; i < a.sz; i++)
    // {
    //     cout << a[i].first sp << a[i].second nl;
    // }
    if (is_sorted(all(a)) == true)
    {
        for (int i = 0; i < a.sz; i++)
        {
            if (a[i].first != a[i].second)
            {
                cout << rate;
                return 0;
            }
        }
        for (int i = 0; i < a.sz - 1; i++)
        {
            if (a[i].first < a[i + 1].first)
            {
                cout << unrate;
                return 0;
            }
        }
        cout << maybe;
    }
    else
    {
        for (int i = 0; i < a.sz; i++)
        {
            if (a[i].first != a[i].second)
            {
                cout << rate;
                return 0;
            }
        }
        for (int i = 0; i < a.sz - 1; i++)
        {
            if (a[i].first < a[i + 1].first)
            {
                cout << unrate;
                return 0;
            }
        }
        cout << maybe;
    }
}