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

int main()
{
    fast_out();
    int n, a, b;
    cin >> n >> a >> b;
    vector<pair<int, int>> a1(n);

    if (n == 1)
    {
        if (a == b)
        {
            cout << 1 nl << a << ":" << b;
        }
        else
        {
            cout << 0 nl << a << ":" << b;
        }
        return 0;
    }

    int l = 0, r = a1.sz - 1;
    while (l < r && a > 0 && b > 0)
    {
        if (a > 0)
        {
            a1[l].first++;
            a--;
            l++;
        }
        if (b > 0)
        {
            a1[r].second++;
            b--;
            r--;
        }
    }
    fat(x, a1)
    {
        if (a > 0 && (x.first == 0 && x.second == 0))
        {
            x.first++;
            a--;
        }
        if (b > 0 && (x.first == 0 && x.second == 0))
        {
            x.second++;
            b--;
        }
    }
    if (b > 0)
    {
        a1[a1.sz - 1].second += b;
        b = 0;
    }
    if (a > 0)
    {
        a1[0].first += a;
        a = 0;
    }
    int cnt = 0;
    fat(x, a1)
    {
        x.first == x.second ? cnt++ : cnt;
    }
    cout << cnt nl;
    for (int i = 0; i < a1.sz; i++)
    {
        cout << a1[i].first << ":" << a1[i].second nl;
    }
}